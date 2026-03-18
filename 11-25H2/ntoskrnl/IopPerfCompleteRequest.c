/*
 * XREFs of IopPerfCompleteRequest @ 0x14049CE74
 * Callers:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     IovCompleteRequest @ 0x140B96788 (IovCompleteRequest.c)
 * Callees:
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     IopFreeIrpExtension @ 0x140252920 (IopFreeIrpExtension.c)
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     IopIrpHasExtensionType @ 0x1403EF950 (IopIrpHasExtensionType.c)
 *     IopProcessIoTracking @ 0x140593F70 (IopProcessIoTracking.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall IopPerfCompleteRequest(__int64 BugCheckParameter1, CCHAR a2, __int64 a3)
{
  bool v3; // zf
  char v6; // cl
  char v7; // dl
  __int64 v8; // rsi
  unsigned __int8 *v9; // rbx
  __int64 v10; // rcx
  signed __int32 v11; // r14d
  __int64 v12; // r8
  bool v13; // sf
  char v14; // al
  __int64 v15; // rax
  __int128 v16; // [rsp+30h] [rbp-39h] BYREF
  __int128 v17; // [rsp+40h] [rbp-29h]
  __int64 v18; // [rsp+50h] [rbp-19h] BYREF
  signed __int32 v19; // [rsp+58h] [rbp-11h]
  _QWORD v20[2]; // [rsp+60h] [rbp-9h] BYREF
  signed __int32 v21; // [rsp+70h] [rbp+7h]
  _QWORD *v22; // [rsp+78h] [rbp+Fh] BYREF
  int v23; // [rsp+80h] [rbp+17h]
  int v24; // [rsp+84h] [rbp+1Bh]
  __int64 *v25; // [rsp+88h] [rbp+1Fh] BYREF
  int v26; // [rsp+90h] [rbp+27h]
  int v27; // [rsp+94h] [rbp+2Bh]

  v3 = *(_WORD *)BugCheckParameter1 == 6;
  v16 = 0LL;
  v17 = 0LL;
  if ( !v3 )
    goto LABEL_8;
  v6 = *(_BYTE *)(BugCheckParameter1 + 66);
  v7 = *(_BYTE *)(BugCheckParameter1 + 67);
  if ( v7 > (char)(v6 + 1) )
    goto LABEL_8;
  v8 = 0LL;
  v9 = 0LL;
  if ( v7 <= v6 )
  {
    v9 = *(unsigned __int8 **)(BugCheckParameter1 + 184);
    if ( *((_QWORD *)v9 + 5) )
    {
      if ( (IopPerfStatus & 2) != 0
        && IopIrpHasExtensionType(BugCheckParameter1, 1u)
        && !IopIrpHasExtensionType(BugCheckParameter1, 4u) )
      {
        IopProcessIoTracking(
          MEMORY[0xFFFFF78000000014] - *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 200) + 40LL),
          *(unsigned int *)(*((_QWORD *)v9 + 5) + 72LL));
        IopFreeIrpExtension(BugCheckParameter1, 1, 1);
      }
      v10 = *(_QWORD *)(*((_QWORD *)v9 + 5) + 8LL);
      if ( v10 )
      {
        v15 = *v9;
        if ( (unsigned __int8)v15 <= 0x1Bu )
          v8 = *(_QWORD *)(v10 + 8 * v15 + 112);
      }
    }
    else
    {
      v8 = *((_QWORD *)v9 + 7);
    }
  }
  if ( (IopPerfStatus & 1) == 0 )
  {
LABEL_8:
    IopfCompleteRequest((IRP *)BugCheckParameter1, a2, a3);
    return;
  }
  v24 = 0;
  v20[0] = v8;
  v20[1] = BugCheckParameter1;
  v11 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
  v21 = v11;
  v22 = v20;
  v23 = 20;
  EtwTraceKernelEvent((int)&v22, 1, 0x20000010u, 308, 5249026);
  if ( v9 )
  {
    v13 = *(int *)(BugCheckParameter1 + 48) < 0;
    *((_QWORD *)&v16 + 1) = *((_QWORD *)v9 + 8);
    *(_QWORD *)&v16 = v9;
    DWORD2(v17) = v11;
    BYTE12(v17) = v9[3];
    v14 = v9[3];
    if ( v13 )
    {
      if ( v14 < 0 )
        goto LABEL_14;
    }
    else if ( (v14 & 0x40) != 0 )
    {
      goto LABEL_14;
    }
    if ( !*(_BYTE *)(BugCheckParameter1 + 68) || (v14 & 0x20) == 0 )
    {
      v9[3] = v14 | 0xC0;
      goto LABEL_18;
    }
LABEL_14:
    *(_QWORD *)&v17 = *((_QWORD *)v9 + 7);
    *((_QWORD *)&v16 + 1) = *((_QWORD *)v9 + 8);
LABEL_18:
    *((_QWORD *)v9 + 7) = IopPerfCompletionRoutine;
    *((_QWORD *)v9 + 8) = &v16;
  }
  IopfCompleteRequest((IRP *)BugCheckParameter1, a2, v12);
  v27 = 0;
  v25 = &v18;
  v18 = BugCheckParameter1;
  v19 = v11;
  v26 = 12;
  EtwTraceKernelEvent((int)&v25, 1, 0x20000010u, 309, 5249026);
}
