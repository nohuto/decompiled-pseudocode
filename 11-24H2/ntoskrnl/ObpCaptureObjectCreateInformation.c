/*
 * XREFs of ObpCaptureObjectCreateInformation @ 0x1408A5340
 * Callers:
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     NtCreateSemaphore @ 0x14083A3C0 (NtCreateSemaphore.c)
 *     CmpCreateKeyBody @ 0x14083A700 (CmpCreateKeyBody.c)
 *     NtCreateMutant @ 0x14083AEC0 (NtCreateMutant.c)
 *     NtCreateWaitCompletionPacket @ 0x14083B1F0 (NtCreateWaitCompletionPacket.c)
 *     NtCreateEvent @ 0x1408532A0 (NtCreateEvent.c)
 *     ObReferenceObjectByNameEx @ 0x14086BC94 (ObReferenceObjectByNameEx.c)
 *     IopAllocRealFileObject @ 0x1408A3050 (IopAllocRealFileObject.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     ObCreateObject @ 0x140973930 (ObCreateObject.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ObpCaptureObjectName @ 0x1408A5650 (ObpCaptureObjectName.c)
 *     SeCaptureSecurityDescriptor @ 0x1409108D0 (SeCaptureSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCaptureObjectCreateInformation(
        unsigned __int8 a1,
        char a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        unsigned int a6)
{
  int v8; // r9d
  int v9; // eax
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r14
  int v13; // r12d
  void *v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // ecx
  __int16 v18; // dx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rdx

  *a4 = 0LL;
  *(_OWORD *)a5 = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_OWORD *)(a5 + 32) = 0LL;
  *(_OWORD *)(a5 + 48) = 0LL;
  if ( !a3 )
    return 0LL;
  *(_BYTE *)(a5 + 16) = a1;
  if ( a1 && KeGetCurrentThread()->PreviousMode )
  {
    if ( (a3 & 7) != 0 )
      goto LABEL_17;
    v8 = -65536;
  }
  else
  {
    v8 = -65536;
  }
  if ( *(_DWORD *)a3 == 48 )
  {
    *(_QWORD *)(a5 + 8) = *(_QWORD *)(a3 + 8);
    v9 = *(_DWORD *)(a3 + 24);
    if ( a2 )
      v9 &= ~0x200u;
    if ( (v9 & 0xFFFEE00D) != 0 )
    {
      v13 = -1073741811;
    }
    else
    {
      *(_DWORD *)a5 = v9;
      v10 = *(_QWORD *)(a3 + 16);
      v11 = *(_QWORD *)(a3 + 32);
      v12 = *(_QWORD *)(a3 + 40);
      if ( v12 )
      {
        if ( a1 )
        {
          if ( KeGetCurrentThread()->PreviousMode && (v12 & 3) != 0 )
LABEL_17:
            ExRaiseDatatypeMisalignment();
          v11 = *(_QWORD *)(a3 + 32);
          v10 = *(_QWORD *)(a3 + 16);
        }
        *(_QWORD *)(a5 + 48) = *(_QWORD *)v12;
        *(_DWORD *)(a5 + 56) = *(_DWORD *)(v12 + 8);
      }
      if ( v11 )
      {
        LOBYTE(v8) = 1;
        v13 = SeCaptureSecurityDescriptor(v11, a1, 1, v8, a5 + 32);
        if ( v13 < 0 )
        {
          *(_QWORD *)(a5 + 32) = 0LL;
          goto LABEL_30;
        }
        v16 = *(_QWORD *)(a5 + 32);
        v17 = 0;
        if ( *(_BYTE *)v16 == 1 )
        {
          v18 = *(_WORD *)(v16 + 2);
          if ( v18 >= 0 )
          {
            v20 = *(_QWORD *)(v16 + 16);
          }
          else
          {
            v19 = *(unsigned int *)(v16 + 8);
            if ( (_DWORD)v19 )
              v20 = v16 + v19;
            else
              v20 = 0LL;
          }
          if ( (v18 & 4) != 0 )
          {
            if ( v18 >= 0 )
            {
              v22 = *(_QWORD *)(v16 + 32);
            }
            else
            {
              v21 = *(unsigned int *)(v16 + 16);
              if ( (_DWORD)v21 )
                v22 = v16 + v21;
              else
                v22 = 0LL;
            }
          }
          else
          {
            v22 = 0LL;
          }
          if ( v20 )
            v17 = (4 * *(unsigned __int8 *)(v20 + 1) + 11) & 0xFFFFFFFC;
          if ( v22 )
            v17 += (*(unsigned __int16 *)(v22 + 2) + 3) & 0xFFFFFFFC;
        }
        *(_DWORD *)(a5 + 28) = v17;
      }
      if ( !v12 )
        goto LABEL_22;
      *(_DWORD *)(a5 + 48) = 12;
      *(_QWORD *)(a5 + 40) = a5 + 48;
      if ( *(_BYTE *)(a5 + 56) >= 2u )
      {
        v13 = -1073741811;
        goto LABEL_30;
      }
      if ( *(_DWORD *)(a5 + 52) > 3u )
      {
        v13 = -1073741659;
      }
      else
      {
LABEL_22:
        if ( v10 )
        {
          v13 = ObpCaptureObjectName(a1, v10, a4, a6);
          if ( v13 >= 0 )
            return 0LL;
        }
        else
        {
          if ( !*(_QWORD *)(a5 + 8) )
            return 0LL;
          v13 = -1073741773;
        }
      }
    }
  }
  else
  {
    v13 = -1073741811;
  }
LABEL_30:
  v15 = *(void **)(a5 + 32);
  if ( v15 )
  {
    if ( *(_BYTE *)(a5 + 16) <= 1u )
      ExFreePoolWithTag(v15, 0);
    *(_QWORD *)(a5 + 32) = 0LL;
  }
  return (unsigned int)v13;
}
