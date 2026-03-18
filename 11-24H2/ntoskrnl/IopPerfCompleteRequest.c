/*
 * XREFs of IopPerfCompleteRequest @ 0x1403DC6BC
 * Callers:
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     IovCompleteRequest @ 0x140BA6768 (IovCompleteRequest.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     IopFreeIrpExtension @ 0x14031B360 (IopFreeIrpExtension.c)
 *     IopfCompleteRequest @ 0x1403DBB10 (IopfCompleteRequest.c)
 *     IopIrpHasExtensionType @ 0x1403F51A0 (IopIrpHasExtensionType.c)
 *     IopProcessIoTracking @ 0x140597680 (IopProcessIoTracking.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall IopPerfCompleteRequest(__int64 BugCheckParameter1, char a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  char v7; // cl
  char v8; // dl
  __int64 v9; // rsi
  unsigned __int8 *v10; // rbx
  __int64 v11; // rcx
  signed __int32 v12; // r14d
  __int64 v13; // r8
  __int64 v14; // r9
  bool v15; // sf
  char v16; // al
  __int64 v17; // rax
  __int128 v18; // [rsp+30h] [rbp-39h] BYREF
  __int128 v19; // [rsp+40h] [rbp-29h]
  __int64 v20; // [rsp+50h] [rbp-19h] BYREF
  signed __int32 v21; // [rsp+58h] [rbp-11h]
  _QWORD v22[2]; // [rsp+60h] [rbp-9h] BYREF
  signed __int32 v23; // [rsp+70h] [rbp+7h]
  _QWORD *v24; // [rsp+78h] [rbp+Fh] BYREF
  int v25; // [rsp+80h] [rbp+17h]
  int v26; // [rsp+84h] [rbp+1Bh]
  __int64 *v27; // [rsp+88h] [rbp+1Fh] BYREF
  int v28; // [rsp+90h] [rbp+27h]
  int v29; // [rsp+94h] [rbp+2Bh]

  v4 = *(_WORD *)BugCheckParameter1 == 6;
  v18 = 0LL;
  v19 = 0LL;
  if ( !v4 )
    goto LABEL_8;
  v7 = *(_BYTE *)(BugCheckParameter1 + 66);
  v8 = *(_BYTE *)(BugCheckParameter1 + 67);
  if ( v8 > (char)(v7 + 1) )
    goto LABEL_8;
  v9 = 0LL;
  v10 = 0LL;
  if ( v8 <= v7 )
  {
    v10 = *(unsigned __int8 **)(BugCheckParameter1 + 184);
    if ( *((_QWORD *)v10 + 5) )
    {
      if ( (IopPerfStatus & 2) != 0
        && (unsigned __int8)IopIrpHasExtensionType(BugCheckParameter1, 1LL)
        && !(unsigned __int8)IopIrpHasExtensionType(BugCheckParameter1, 4LL) )
      {
        IopProcessIoTracking(
          MEMORY[0xFFFFF78000000014] - *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 200) + 40LL),
          *(unsigned int *)(*((_QWORD *)v10 + 5) + 72LL));
        IopFreeIrpExtension(BugCheckParameter1, 1, 1);
      }
      v11 = *(_QWORD *)(*((_QWORD *)v10 + 5) + 8LL);
      if ( v11 )
      {
        v17 = *v10;
        if ( (unsigned __int8)v17 <= 0x1Bu )
          v9 = *(_QWORD *)(v11 + 8 * v17 + 112);
      }
    }
    else
    {
      v9 = *((_QWORD *)v10 + 7);
    }
  }
  if ( (IopPerfStatus & 1) == 0 )
  {
LABEL_8:
    IopfCompleteRequest((IRP *)BugCheckParameter1, a2, a3, a4);
    return;
  }
  v26 = 0;
  v22[0] = v9;
  v22[1] = BugCheckParameter1;
  v12 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
  v23 = v12;
  v24 = v22;
  v25 = 20;
  EtwTraceKernelEvent((int)&v24, 1, 0x20000010u, 308, 5249026);
  if ( v10 )
  {
    v15 = *(int *)(BugCheckParameter1 + 48) < 0;
    *((_QWORD *)&v18 + 1) = *((_QWORD *)v10 + 8);
    *(_QWORD *)&v18 = v10;
    DWORD2(v19) = v12;
    BYTE12(v19) = v10[3];
    v16 = v10[3];
    if ( v15 )
    {
      if ( v16 < 0 )
        goto LABEL_14;
    }
    else if ( (v16 & 0x40) != 0 )
    {
      goto LABEL_14;
    }
    if ( !*(_BYTE *)(BugCheckParameter1 + 68) || (v16 & 0x20) == 0 )
    {
      v10[3] = v16 | 0xC0;
      goto LABEL_18;
    }
LABEL_14:
    *(_QWORD *)&v19 = *((_QWORD *)v10 + 7);
    *((_QWORD *)&v18 + 1) = *((_QWORD *)v10 + 8);
LABEL_18:
    *((_QWORD *)v10 + 7) = IopPerfCompletionRoutine;
    *((_QWORD *)v10 + 8) = &v18;
  }
  IopfCompleteRequest((IRP *)BugCheckParameter1, a2, v13, v14);
  v29 = 0;
  v27 = &v20;
  v20 = BugCheckParameter1;
  v21 = v12;
  v28 = 12;
  EtwTraceKernelEvent((int)&v27, 1, 0x20000010u, 309, 5249026);
}
