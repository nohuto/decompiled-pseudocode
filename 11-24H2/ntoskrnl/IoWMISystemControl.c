/*
 * XREFs of IoWMISystemControl @ 0x140A373A4
 * Callers:
 *     WmipSystemControl @ 0x140A37380 (WmipSystemControl.c)
 * Callees:
 *     WmipFindRegEntryByProviderId @ 0x1402DDC64 (WmipFindRegEntryByProviderId.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     WmipUnreferenceRegEntry @ 0x14046A188 (WmipUnreferenceRegEntry.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     WmipQueryWmiRegInfo @ 0x1407A63B0 (WmipQueryWmiRegInfo.c)
 *     WmipQueryWmiDataBlock @ 0x140A37640 (WmipQueryWmiDataBlock.c)
 *     IoWMICompleteRequest @ 0x140A377CC (IoWMICompleteRequest.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoWMISystemControl(__int64 a1, __int64 a2, IRP *a3)
{
  __int64 p_OutboundQuota; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v6; // r13
  __int64 v7; // rsi
  int v8; // r15d
  __int64 MinorFunction; // rcx
  unsigned int v10; // esi
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // r14
  unsigned int LowPart; // r12d
  _QWORD *p_Length; // r9
  unsigned int v15; // eax
  char *v16; // rcx
  int v17; // r12d
  int v19; // ecx
  int v20; // ecx
  unsigned int v21; // ebx
  int v22; // ecx
  _DWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _DWORD *RegEntryByProviderId; // rax
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  unsigned int v31; // r15d
  NTSTATUS v32; // eax
  void *v33; // rcx
  int v34; // edx
  __int16 v35; // r10
  __int64 v36; // r11
  unsigned int v37; // r15d
  __int128 *v38; // r8
  unsigned int v39; // r13d
  __int64 v40; // r12
  __int64 *p_CompletionMode; // rcx
  __int64 *v42; // r9
  int v43; // eax
  _WORD *v44; // rcx
  void *Src[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v46; // [rsp+50h] [rbp-10h] BYREF
  int MaximumInstances; // [rsp+A0h] [rbp+40h]
  int v48; // [rsp+B0h] [rbp+50h] BYREF
  unsigned __int16 *v49; // [rsp+B8h] [rbp+58h] BYREF

  p_OutboundQuota = 0LL;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v6 = a2;
  LOBYTE(a2) = 11;
  MaximumInstances = 0;
  v7 = 0LL;
  v8 = 0;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( (unsigned __int8)MinorFunction <= 0xBu
    && CurrentStackLocation->Parameters.WMI.ProviderId == v6
    && (WmipGuidList || (_BYTE)MinorFunction == 8 || (_BYTE)MinorFunction == 11) )
  {
    Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( (_BYTE)MinorFunction != 8 && (_BYTE)MinorFunction != 11 )
    {
      p_Length = &CurrentStackLocation->Parameters.QueryDirectory.FileName->Length;
      while ( 1 )
      {
        if ( (unsigned int)v7 >= 7 )
        {
          v21 = -1073741163;
LABEL_36:
          a3->IoStatus.Status = v21;
          IofCompleteRequest(a3, 0);
          return v21;
        }
        a2 = *p_Length - WmipGuidList[3 * v7];
        if ( *p_Length == WmipGuidList[3 * v7] )
          a2 = p_Length[1] - WmipGuidList[3 * v7 + 1];
        if ( !a2 )
          break;
        v7 = (unsigned int)(v7 + 1);
      }
      v8 = WmipGuidList[3 * v7 + 2];
      if ( (unsigned __int8)(MinorFunction - 1) <= 2u || (_BYTE)MinorFunction == 9 )
      {
        MaximumInstances = Parameters[1].MaximumInstances;
        if ( (Parameters[1].ReadMode & 0x80u) == 0 )
        {
          v21 = -1073741162;
          goto LABEL_36;
        }
      }
    }
    if ( (unsigned int)MinorFunction <= 5 )
    {
      if ( (_DWORD)MinorFunction == 5 )
        goto LABEL_41;
      if ( !CurrentStackLocation->MinorFunction )
      {
        if ( LowPart >= 0x3C )
        {
          if ( (unsigned int)v7 > 1 )
          {
LABEL_25:
            if ( v8 )
            {
              Parameters[1].ReadMode &= ~0x10u;
              v15 = (8 * v8 + 67) & 0xFFFFFFF8;
              Parameters[1].MaximumInstances = v8;
              Parameters[1].CompletionMode = v15;
              if ( v15 > LowPart )
              {
                v16 = 0LL;
                v17 = 0;
              }
              else
              {
                p_OutboundQuota = (__int64)&Parameters[1].OutboundQuota;
                v16 = (char *)Parameters + v15;
                v17 = LowPart - v15;
              }
              return (unsigned int)WmipQueryWmiDataBlock(v6, (int)a3, v7, 0, v8, p_OutboundQuota, v17, v16);
            }
            else
            {
              return (unsigned int)IoWMICompleteRequest(MinorFunction, a2, a3, 3221226134LL, 0);
            }
          }
          RegEntryByProviderId = WmipFindRegEntryByProviderId(Parameters->ReadMode);
          if ( RegEntryByProviderId )
          {
            v6 = *((_QWORD *)RegEntryByProviderId + 2);
            if ( (_DWORD)v7 )
              v8 = 1;
            else
              v8 = RegEntryByProviderId[13];
            WmipUnreferenceRegEntry((__int64)RegEntryByProviderId);
            goto LABEL_25;
          }
          return (unsigned int)IoWMICompleteRequest(v25, v24, a3, 3221226133LL, 0);
        }
        return (unsigned int)IoWMICompleteRequest(MinorFunction, a2, a3, 3221225507LL, 60);
      }
      v19 = MinorFunction - 1;
      if ( !v19 )
      {
        if ( (unsigned int)v7 <= 1 )
        {
          v23 = WmipFindRegEntryByProviderId(Parameters->ReadMode);
          if ( !v23 )
            return (unsigned int)IoWMICompleteRequest(v25, v24, a3, 3221226133LL, 0);
          v6 = *((_QWORD *)v23 + 2);
          WmipUnreferenceRegEntry((__int64)v23);
        }
        return (unsigned int)WmipQueryWmiDataBlock(
                               v6,
                               (int)a3,
                               v7,
                               MaximumInstances,
                               1,
                               (__int64)&Parameters[1].OutboundQuota,
                               LowPart - Parameters[1].InboundQuota,
                               (char *)Parameters + Parameters[1].InboundQuota);
      }
      v20 = v19 - 1;
      if ( !v20 || (v22 = v20 - 1) == 0 )
      {
        v10 = -1073741114;
        a3->IoStatus.Status = -1073741114;
LABEL_34:
        a3->IoStatus.Information = 0LL;
        goto LABEL_8;
      }
      if ( v22 == 1 )
      {
LABEL_41:
        v10 = 0;
        a3->IoStatus.Status = 0;
        goto LABEL_34;
      }
      return (unsigned int)-1073741808;
    }
    v27 = MinorFunction - 6;
    if ( !v27 )
      goto LABEL_41;
    v28 = v27 - 1;
    if ( !v28 )
      goto LABEL_41;
    v29 = v28 - 1;
    if ( v29 )
    {
      v30 = v29 - 1;
      if ( !v30 )
      {
        v10 = -1073741808;
        a3->IoStatus.Status = -1073741808;
        goto LABEL_34;
      }
      if ( v30 != 2 )
        return (unsigned int)-1073741808;
    }
    v49 = 0LL;
    v48 = 0;
    v31 = 0;
    v46 = 0LL;
    *(_OWORD *)Src = 0LL;
    v32 = WmipQueryWmiRegInfo(v6, (__int64)&v48, (UNICODE_STRING *)Src, &v49);
    v33 = Src[1];
    v10 = v32;
    if ( v32 >= 0 )
    {
      v34 = v48;
      if ( (v48 & 0x20) == 0 && !Src[1] )
      {
        v10 = -1073741808;
LABEL_83:
        a3->IoStatus.Information = v31;
        goto LABEL_7;
      }
      v35 = (__int16)Src[0];
      if ( (v48 & 0x20) != 0 )
      {
        v36 = 0LL;
        v37 = 248;
      }
      else
      {
        v34 = v48 | 4;
        v37 = LOWORD(Src[0]) + 250;
        v48 |= 4u;
        v36 = 248LL;
      }
      v38 = (__int128 *)v49;
      if ( !v49 )
      {
        v38 = &v46;
        v49 = (unsigned __int16 *)&v46;
      }
      if ( v37 < 0xF8 || (v39 = v37 + *(unsigned __int16 *)v38 + 2, v39 < v37) )
      {
        v31 = 0;
        v10 = -1073741675;
      }
      else
      {
        Parameters->NamedPipeType = v39;
        v10 = 0;
        if ( v39 <= LowPart )
        {
          v40 = 7LL;
          Parameters->ReadMode = 0;
          Parameters->InboundQuota = 7;
          p_CompletionMode = (__int64 *)&Parameters[1].CompletionMode;
          Parameters->MaximumInstances = 0;
          v42 = &WmipGuidList[2];
          Parameters->CompletionMode = v37;
          do
          {
            *(_OWORD *)(p_CompletionMode - 3) = *((_OWORD *)v42 - 1);
            *((_DWORD *)p_CompletionMode - 2) = *((_DWORD *)v42 + 1) | v34;
            *p_CompletionMode = v36;
            p_CompletionMode += 4;
            v43 = *(_DWORD *)v42;
            v42 += 3;
            *((_DWORD *)p_CompletionMode - 9) = v43;
            --v40;
          }
          while ( v40 );
          if ( (v34 & 4) != 0 )
          {
            LOWORD(Parameters[6].CompletionMode) = v35;
            memmove((char *)&Parameters[6].CompletionMode + 2, Src[1], LOWORD(Src[0]));
            v38 = (__int128 *)v49;
          }
          v44 = (_WORD *)((char *)Parameters + v37);
          *v44 = *(_WORD *)v38;
          memmove(v44 + 1, *((const void **)v49 + 1), *v49);
          v33 = Src[1];
          v31 = v39;
        }
        else
        {
          v31 = 4;
        }
      }
    }
    if ( v33 )
      ExFreePoolWithTag(v33, 0);
    goto LABEL_83;
  }
  v10 = -1073741808;
LABEL_7:
  a3->IoStatus.Status = v10;
LABEL_8:
  IofCompleteRequest(a3, 0);
  return v10;
}
