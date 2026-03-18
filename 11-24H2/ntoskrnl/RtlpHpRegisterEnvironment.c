/*
 * XREFs of RtlpHpRegisterEnvironment @ 0x1406053F0
 * Callers:
 *     RtlpHpHeapCreate @ 0x140604D0C (RtlpHpHeapCreate.c)
 *     RtlpHpHeapDestroy @ 0x1406050DC (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14020D790 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x140604534 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x1406048CC (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x1406058F0 (RtlpHpVaMgrCtxAllocatorReference.c)
 */

__int64 __fastcall RtlpHpRegisterEnvironment(__int128 *a1, int a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int64 result; // rax
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  char *v9; // rdi
  char v10; // al
  __int128 v12; // [rsp+20h] [rbp-30h]
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h]
  __int64 v15; // [rsp+60h] [rbp+10h] BYREF

  v3 = *a1;
  v15 = 0LL;
  v12 = v3;
  if ( !a2 )
  {
    if ( BYTE3(v3) )
      v8 = (unsigned int)BYTE3(v3) - 1;
    else
      v8 = 0xFFFFFFFFLL;
    v9 = (char *)&unk_140E68BC8 + 48 * v8;
    v10 = RtlpHpAcquireLockExclusive((int *)&qword_140E68BB8, 1, a3);
    if ( (*((_WORD *)v9 + 21))-- == 1 )
    {
      *(_OWORD *)v9 = 0LL;
      *((_OWORD *)v9 + 1) = 0LL;
      *((_OWORD *)v9 + 2) = 0LL;
      *((_QWORD *)v9 + 2) = 0LL;
      --dword_140E68BC4;
    }
    RtlpHpReleaseLockExclusive((ULONG_PTR)&qword_140E68BB8, 1LL, v10);
    if ( BYTE1(*(_QWORD *)a1) == 5 )
    {
      v13 = *a1;
      RtlpHpCustomVaCallbacksRegistrarUnregister((__int64)&RtlpHpHeapVaCallbacksRegistrar, *((__int64 *)&v3 + 1), &v13);
    }
    return 0LL;
  }
  if ( BYTE1(*(_QWORD *)a1) == 5 )
  {
    v13 = v3;
    result = RtlpHpCustomVaCallbacksRegistrarRegister(
               (__int64)&RtlpHpHeapVaCallbacksRegistrar,
               *((char **)&v3 + 1),
               &v15,
               &v13);
    if ( (int)result < 0 )
      return result;
    v6 = v15;
    *((_QWORD *)&v12 + 1) = v15;
  }
  else
  {
    v6 = *((_QWORD *)&v3 + 1);
  }
  HIDWORD(v13) = 0;
  if ( BYTE3(v3) )
    LODWORD(v13) = BYTE3(v3) - 1;
  else
    LODWORD(v13) = -1;
  DWORD1(v13) = BYTE1(v3);
  DWORD2(v13) = BYTE2(v3);
  if ( (v3 & 8) != 0 )
    HIDWORD(v13) = 1;
  v14 = v6;
  v7 = RtlpHpVaMgrCtxAllocatorReference(&unk_140E68358, &v13);
  if ( v7 != -1 )
  {
    BYTE3(v12) = v7 + 1;
    *a1 = v12;
    return 0LL;
  }
  if ( BYTE1(*(_QWORD *)a1) == 5 )
  {
    v13 = *a1;
    RtlpHpCustomVaCallbacksRegistrarUnregister((__int64)&RtlpHpHeapVaCallbacksRegistrar, v6, &v13);
  }
  return 3221225626LL;
}
