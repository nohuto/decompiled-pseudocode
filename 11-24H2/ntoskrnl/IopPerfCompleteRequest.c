/*
 * XREFs of IopPerfCompleteRequest @ 0x1403CB914
 * Callers:
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     IovCompleteRequest @ 0x140BA8768 (IovCompleteRequest.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     IopFreeIrpExtension @ 0x1402C3EF0 (IopFreeIrpExtension.c)
 *     IopfCompleteRequest @ 0x1403CCDE0 (IopfCompleteRequest.c)
 *     IopIrpHasExtensionType @ 0x1403E8190 (IopIrpHasExtensionType.c)
 *     IopProcessIoTracking @ 0x140594600 (IopProcessIoTracking.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall IopPerfCompleteRequest(ULONG_PTR BugCheckParameter1)
{
  bool v1; // zf
  char v3; // cl
  char v4; // dl
  __int64 v5; // rsi
  unsigned __int8 *v6; // rbx
  __int64 v7; // rcx
  signed __int32 v9; // r14d
  bool v10; // sf
  char v11; // al
  __int64 v12; // rax
  __int128 v13; // [rsp+30h] [rbp-39h] BYREF
  __int128 v14; // [rsp+40h] [rbp-29h]
  ULONG_PTR v15; // [rsp+50h] [rbp-19h] BYREF
  signed __int32 v16; // [rsp+58h] [rbp-11h]
  _QWORD v17[2]; // [rsp+60h] [rbp-9h] BYREF
  signed __int32 v18; // [rsp+70h] [rbp+7h]
  _QWORD *v19; // [rsp+78h] [rbp+Fh] BYREF
  int v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+84h] [rbp+1Bh]
  ULONG_PTR *v22; // [rsp+88h] [rbp+1Fh] BYREF
  int v23; // [rsp+90h] [rbp+27h]
  int v24; // [rsp+94h] [rbp+2Bh]

  v1 = *(_WORD *)BugCheckParameter1 == 6;
  v13 = 0LL;
  v14 = 0LL;
  if ( !v1 )
    return IopfCompleteRequest(BugCheckParameter1);
  v3 = *(_BYTE *)(BugCheckParameter1 + 66);
  v4 = *(_BYTE *)(BugCheckParameter1 + 67);
  if ( v4 > (char)(v3 + 1) )
    return IopfCompleteRequest(BugCheckParameter1);
  v5 = 0LL;
  v6 = 0LL;
  if ( v4 <= v3 )
  {
    v6 = *(unsigned __int8 **)(BugCheckParameter1 + 184);
    if ( *((_QWORD *)v6 + 5) )
    {
      if ( (IopPerfStatus & 2) != 0
        && (unsigned __int8)IopIrpHasExtensionType(BugCheckParameter1, 1LL)
        && !(unsigned __int8)IopIrpHasExtensionType(BugCheckParameter1, 4LL) )
      {
        IopProcessIoTracking(
          MEMORY[0xFFFFF78000000014] - *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 200) + 40LL),
          *(unsigned int *)(*((_QWORD *)v6 + 5) + 72LL));
        IopFreeIrpExtension(BugCheckParameter1, 1, 1);
      }
      v7 = *(_QWORD *)(*((_QWORD *)v6 + 5) + 8LL);
      if ( v7 )
      {
        v12 = *v6;
        if ( (unsigned __int8)v12 <= 0x1Bu )
          v5 = *(_QWORD *)(v7 + 8 * v12 + 112);
      }
    }
    else
    {
      v5 = *((_QWORD *)v6 + 7);
    }
  }
  if ( (IopPerfStatus & 1) == 0 )
    return IopfCompleteRequest(BugCheckParameter1);
  v21 = 0;
  v17[0] = v5;
  v17[1] = BugCheckParameter1;
  v9 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
  v18 = v9;
  v19 = v17;
  v20 = 20;
  EtwTraceKernelEvent((int)&v19, 1, 0x20000010u, 308, 5249026);
  if ( v6 )
  {
    v10 = *(int *)(BugCheckParameter1 + 48) < 0;
    *((_QWORD *)&v13 + 1) = *((_QWORD *)v6 + 8);
    *(_QWORD *)&v13 = v6;
    DWORD2(v14) = v9;
    BYTE12(v14) = v6[3];
    v11 = v6[3];
    if ( v10 )
    {
      if ( v11 < 0 )
        goto LABEL_14;
    }
    else if ( (v11 & 0x40) != 0 )
    {
      goto LABEL_14;
    }
    if ( !*(_BYTE *)(BugCheckParameter1 + 68) || (v11 & 0x20) == 0 )
    {
      v6[3] = v11 | 0xC0;
      goto LABEL_18;
    }
LABEL_14:
    *(_QWORD *)&v14 = *((_QWORD *)v6 + 7);
    *((_QWORD *)&v13 + 1) = *((_QWORD *)v6 + 8);
LABEL_18:
    *((_QWORD *)v6 + 7) = IopPerfCompletionRoutine;
    *((_QWORD *)v6 + 8) = &v13;
  }
  IopfCompleteRequest(BugCheckParameter1);
  v24 = 0;
  v22 = &v15;
  v15 = BugCheckParameter1;
  v16 = v9;
  v23 = 12;
  return EtwTraceKernelEvent((int)&v22, 1, 0x20000010u, 309, 5249026);
}
