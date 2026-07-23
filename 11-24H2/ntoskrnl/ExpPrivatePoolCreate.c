/*
 * XREFs of ExpPrivatePoolCreate @ 0x1407C63A0
 * Callers:
 *     ExCreatePool @ 0x1406525E0 (ExCreatePool.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1403D20F0 (RtlUnicodeStringCopy.c)
 *     RtlHpEnvContextCreate @ 0x1403FD7A0 (RtlHpEnvContextCreate.c)
 *     RtlpHpMetadataAlloc @ 0x140458A08 (RtlpHpMetadataAlloc.c)
 *     RtlpHpHeapCreate @ 0x14060234C (RtlpHpHeapCreate.c)
 *     RtlpHpLfhContextUpdateConfig @ 0x140603FAC (RtlpHpLfhContextUpdateConfig.c)
 *     ExpAcquirePoolListLockExclusive @ 0x140659A54 (ExpAcquirePoolListLockExclusive.c)
 *     ExpReleasePoolListLockExclusive @ 0x140659AB8 (ExpReleasePoolListLockExclusive.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExpPrivatePoolDestroy @ 0x1407C65CC (ExpPrivatePoolDestroy.c)
 */

__int64 __fastcall ExpPrivatePoolCreate(unsigned int a1, __int64 a2, __int64 a3, const UNICODE_STRING *a4, _QWORD *a5)
{
  __int64 v6; // rbp
  __int64 Length; // rcx
  unsigned int v9; // esi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r15
  __int128 v12; // xmm6
  char *v13; // rax
  char *v14; // rbx
  NTSTATUS v15; // edi
  unsigned __int16 v16; // ax
  __int64 v17; // rdx
  __int64 i; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 **v23; // rcx
  __int64 *v24; // rax
  __int64 **v25; // rdx
  __int128 v27; // [rsp+30h] [rbp-58h] BYREF
  char v28[16]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+90h] [rbp+8h] BYREF

  v6 = (int)a1;
  if ( a1 > 1 )
    return (unsigned int)-1073741811;
  if ( (a2 & 0xFFFFFFEF) != 0 )
    return (unsigned int)-1073741811;
  if ( !a3 )
    return (unsigned int)-1073741811;
  Length = a4->Length;
  if ( (unsigned __int16)(Length - 1) > 0x7Fu )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = (unsigned __int16)KeNumberNodes;
    if ( (a2 & 0x10) == 0 )
      v9 = 1;
    v10 = (8LL * v9 + 81) & 0xFFFFFFFFFFFFFFFEuLL;
    v11 = Length + v10;
    v12 = *(_OWORD *)RtlHpEnvContextCreate((__int64)&v27, a2, v6, 0, 0);
    v27 = v12;
    v13 = (char *)RtlpHpMetadataAlloc(v11, v11, 0, (unsigned __int64 *)&v27);
    v14 = v13;
    if ( v13 )
    {
      memset_0(v13, 0, v11);
      *(_DWORD *)v14 = -1347437123;
      *((_DWORD *)v14 + 1) = 1;
      *((_QWORD *)v14 + 3) = 0LL;
      *(_OWORD *)(v14 + 8) = v12;
      *((_QWORD *)v14 + 6) = a3;
      v16 = a4->Length;
      *(_OWORD *)(v14 + 56) = 0LL;
      *((_WORD *)v14 + 29) = v16;
      *((_QWORD *)v14 + 8) = &v14[v10];
      v15 = RtlUnicodeStringCopy((PUNICODE_STRING)(v14 + 56), a4);
      if ( v15 < 0 )
      {
LABEL_15:
        ExpPrivatePoolDestroy(v14);
      }
      else
      {
        *((_DWORD *)v14 + 18) = v9;
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)v14 + 18); i = (unsigned int)(i + 1) )
        {
          v27 = *(_OWORD *)RtlHpEnvContextCreate((__int64)v28, v17, v6, i, 0);
          v21 = RtlpHpHeapCreate(0, v19, v20, &v27);
          if ( !v21 )
          {
            v15 = -1073741670;
            goto LABEL_15;
          }
          v29 = 0;
          *(_BYTE *)(v21 + 333) |= 0x10u;
          *(_BYTE *)(v21 + 525) |= 0x10u;
          HIWORD(v29) |= 1u;
          LOWORD(v29) = 512;
          RtlpHpLfhContextUpdateConfig(v21 + 832, &v29);
          *(_QWORD *)&v14[8 * i + 80] = v22;
        }
        ExpAcquirePoolListLockExclusive();
        v23 = (__int64 **)(v14 + 32);
        v24 = &qword_140E6BDE8[2 * v6];
        v25 = (__int64 **)v24[1];
        if ( *v25 != v24 )
          __fastfail(3u);
        *v23 = v24;
        *((_QWORD *)v14 + 5) = v25;
        *v25 = (__int64 *)v23;
        v24[1] = (__int64)v23;
        ExpReleasePoolListLockExclusive();
        *a5 = v14;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v15;
}
