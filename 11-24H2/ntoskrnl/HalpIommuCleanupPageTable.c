/*
 * XREFs of HalpIommuCleanupPageTable @ 0x1405651F8
 * Callers:
 *     HalpIommuFreeDmaDomain @ 0x1405515F8 (HalpIommuFreeDmaDomain.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     Feature_DmarptCleanupOutOfBoundsFix__private_IsEnabledDeviceUsageNoInline @ 0x1405651A4 (Feature_DmarptCleanupOutOfBoundsFix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall HalpIommuCleanupPageTable(__int64 a1)
{
  char *v1; // rdi
  int v3; // ebp
  size_t v4; // r8
  void **v5; // r14
  _DWORD *v6; // rsi
  _DWORD *v7; // r15
  int v8; // r9d
  unsigned int v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  void *v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // [rsp+20h] [rbp-88h]
  _OWORD v17[3]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v18[24]; // [rsp+58h] [rbp-50h] BYREF

  v1 = *(char **)(a1 + 16);
  memset(v17, 0, sizeof(v17));
  if ( v1 )
  {
    v3 = 0;
    v4 = 4LL * *(unsigned int *)(a1 + 24);
    *(_QWORD *)&v17[0] = v1;
    memset_0(v18, 0, v4);
    v5 = (void **)v17;
    v6 = v18;
    v7 = (_DWORD *)(a1 + 36);
    do
    {
      if ( (unsigned int)Feature_DmarptCleanupOutOfBoundsFix__private_IsEnabledDeviceUsageNoInline() )
        v1 = (char *)*v5;
      v8 = *(_DWORD *)(a1 + 28);
      v9 = 1 << *v7;
      v10 = (__int64)&v1[v9 << v8];
      v11 = *(_DWORD *)(a1 + 24) - 1;
      v16 = v10;
      if ( v3 == v11 )
      {
        memset_0(v1, 0, (unsigned __int64)v9 << v8);
        HalpMmAllocCtxFree(v12, (__int64)v1);
      }
      else
      {
        v13 = 0LL;
        do
        {
          v14 = (unsigned int)*v6;
          if ( (unsigned int)v14 >= v9 )
            break;
          v13 = *(void **)(v10 + 8 * v14);
          LODWORD(v14) = v14 + 1;
          *v6 = v14;
        }
        while ( !v13 );
        if ( v13 )
        {
          v15 = (unsigned int)(v14 - 1);
          memset_0(&v1[(_DWORD)v15 << v8], 0, 1LL << v8);
          ++v3;
          ++v7;
          ++v6;
          *(_QWORD *)(v16 + 8 * v15) = 0LL;
          *++v5 = v13;
          goto LABEL_14;
        }
        HalpMmAllocCtxFree(v10, (__int64)v1);
        *v6 = 0;
      }
      --v3;
      --v7;
      --v6;
      --v5;
LABEL_14:
      if ( !(unsigned int)Feature_DmarptCleanupOutOfBoundsFix__private_IsEnabledDeviceUsageNoInline() )
        v1 = (char *)*v5;
    }
    while ( v3 >= 0 );
  }
}
