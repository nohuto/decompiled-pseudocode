/*
 * XREFs of RtlpHpRegisterEnvironment @ 0x140602A30
 * Callers:
 *     RtlpHpHeapCreate @ 0x14060234C (RtlpHpHeapCreate.c)
 *     RtlpHpHeapDestroy @ 0x14060271C (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x140601B74 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x140601F0C (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140602F30 (RtlpHpVaMgrCtxAllocatorReference.c)
 */

__int64 __fastcall RtlpHpRegisterEnvironment(__int128 *a1, int a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rax
  char *v8; // rdi
  char v9; // al
  __int128 v11; // [rsp+20h] [rbp-30h]
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]
  __int64 v14; // [rsp+60h] [rbp+10h] BYREF

  v2 = *a1;
  v14 = 0LL;
  v11 = v2;
  if ( !a2 )
  {
    if ( BYTE3(v2) )
      v7 = (unsigned int)BYTE3(v2) - 1;
    else
      v7 = 0xFFFFFFFFLL;
    v8 = (char *)&unk_140E68DC8 + 48 * v7;
    v9 = RtlpHpAcquireLockExclusive((int *)&qword_140E68DB8, 1);
    if ( (*((_WORD *)v8 + 21))-- == 1 )
    {
      *(_OWORD *)v8 = 0LL;
      *((_OWORD *)v8 + 1) = 0LL;
      *((_OWORD *)v8 + 2) = 0LL;
      *((_QWORD *)v8 + 2) = 0LL;
      --dword_140E68DC4;
    }
    RtlpHpReleaseLockExclusive((ULONG_PTR)&qword_140E68DB8, 1LL, v9);
    if ( BYTE1(*(_QWORD *)a1) == 5 )
    {
      v12 = *a1;
      RtlpHpCustomVaCallbacksRegistrarUnregister((__int64)&RtlpHpHeapVaCallbacksRegistrar, *((__int64 *)&v2 + 1), &v12);
    }
    return 0LL;
  }
  if ( BYTE1(*(_QWORD *)a1) == 5 )
  {
    v12 = v2;
    result = RtlpHpCustomVaCallbacksRegistrarRegister(
               (__int64)&RtlpHpHeapVaCallbacksRegistrar,
               *((char **)&v2 + 1),
               &v14,
               &v12);
    if ( (int)result < 0 )
      return result;
    v5 = v14;
    *((_QWORD *)&v11 + 1) = v14;
  }
  else
  {
    v5 = *((_QWORD *)&v2 + 1);
  }
  HIDWORD(v12) = 0;
  if ( BYTE3(v2) )
    LODWORD(v12) = BYTE3(v2) - 1;
  else
    LODWORD(v12) = -1;
  DWORD1(v12) = BYTE1(v2);
  DWORD2(v12) = BYTE2(v2);
  if ( (v2 & 8) != 0 )
    HIDWORD(v12) = 1;
  v13 = v5;
  v6 = RtlpHpVaMgrCtxAllocatorReference(&unk_140E68558, &v12);
  if ( v6 != -1 )
  {
    BYTE3(v11) = v6 + 1;
    *a1 = v11;
    return 0LL;
  }
  if ( BYTE1(*(_QWORD *)a1) == 5 )
  {
    v12 = *a1;
    RtlpHpCustomVaCallbacksRegistrarUnregister((__int64)&RtlpHpHeapVaCallbacksRegistrar, v5, &v12);
  }
  return 3221225626LL;
}
