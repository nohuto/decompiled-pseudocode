/*
 * XREFs of CmpRegisterCallbackInternal @ 0x14097354C
 * Callers:
 *     CmRegisterCallback @ 0x1407D19F0 (CmRegisterCallback.c)
 *     CmRegisterInternalCallback @ 0x140973450 (CmRegisterInternalCallback.c)
 *     EtwpRegTraceEnableCallback @ 0x1409734A0 (EtwpRegTraceEnableCallback.c)
 *     CmRegisterCallbackEx @ 0x140A948B0 (CmRegisterCallbackEx.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpInsertCallbackInListByAltitude @ 0x140973684 (CmpInsertCallbackInListByAltitude.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpRegisterCallbackInternal(
        __int64 a1,
        __int64 a2,
        const void **a3,
        char a4,
        unsigned __int8 a5,
        _QWORD *a6)
{
  _QWORD *Pool2; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  void *v13; // rax
  __int64 v14; // rdx
  int inserted; // edi
  void *v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]

  v18 = 0LL;
  v19 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v18);
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x50uLL, 0x62634D43u);
  v11 = Pool2;
  if ( !Pool2 )
  {
    inserted = -1073741670;
    goto LABEL_4;
  }
  Pool2[1] = Pool2;
  *Pool2 = Pool2;
  v12 = Pool2 + 8;
  v12[1] = v12;
  *v12 = v12;
  LODWORD(v12) = *((_DWORD *)v11 + 5);
  *((_DWORD *)v11 + 4) = 0;
  v11[4] = a2;
  *((_DWORD *)v11 + 5) = (unsigned int)v12 ^ ((unsigned __int8)v12 ^ a5) & 1;
  v11[5] = a1;
  LOWORD(v12) = *(_WORD *)a3;
  *((_WORD *)v11 + 25) = *(_WORD *)a3;
  *((_WORD *)v11 + 24) = (_WORD)v12;
  v13 = (void *)ExAllocatePool2(0x100uLL, *(unsigned __int16 *)a3, 0x61634D43u);
  v11[7] = v13;
  if ( v13 )
  {
    memmove(v13, a3[1], *(unsigned __int16 *)a3);
    LOBYTE(v14) = a4;
    inserted = CmpInsertCallbackInListByAltitude(v11, v14);
    *a6 = v11[3];
    if ( inserted >= 0 )
      goto LABEL_4;
  }
  else
  {
    inserted = -1073741670;
  }
  v17 = (void *)v11[7];
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  ExFreePoolWithTag(v11, 0);
LABEL_4:
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v18);
  return (unsigned int)inserted;
}
