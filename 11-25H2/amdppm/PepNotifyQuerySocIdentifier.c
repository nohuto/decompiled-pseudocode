/*
 * XREFs of PepNotifyQuerySocIdentifier @ 0x14003B9D4
 * Callers:
 *     InitPep @ 0x14003B614 (InitPep.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 */

void __fastcall PepNotifyQuerySocIdentifier(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // edx
  __int64 Pool2; // rax
  void *v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // edx
  int v10; // r9d
  int v11; // r8d
  _WORD *v12; // rax
  __int64 v13; // rdx
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int128 v15; // [rsp+40h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 1120);
  v15 = 0LL;
  v14 = 0LL;
  v3 = PoFxProcessorNotification(v2, 48LL, &v14);
  if ( !v3 )
  {
    Pool2 = ExAllocatePool2(64LL, 2 * (unsigned int)(unsigned __int16)v14 + 2, 1919119952LL);
    v6 = (void *)Pool2;
    if ( !Pool2 )
      return;
    v7 = *(_QWORD *)(a1 + 1120);
    *((_QWORD *)&v14 + 1) = Pool2;
    v8 = PoFxProcessorNotification(v7, 48LL, &v14);
    if ( v8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_18:
        ExFreePoolWithTag(v6, (ULONG)1919119952);
        return;
      }
      v10 = 11;
      v11 = 2;
    }
    else
    {
      v12 = v6;
      v13 = 0x7FFFLL;
      do
      {
        if ( !*v12 )
          break;
        ++v12;
        --v13;
      }
      while ( v13 );
      if ( v13 )
      {
        *((_QWORD *)&v15 + 1) = v6;
        LOWORD(v15) = 2 * (0x7FFF - v13);
        WORD1(v15) = v15 + 2;
      }
      if ( (v13 == 0 ? 0xC000000D : 0) != 0 )
        goto LABEL_18;
      v8 = ((__int64 (__fastcall *)(__int128 *))qword_1400149C8)(&v15);
      if ( v8 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_18;
      v10 = 12;
      v11 = 3;
    }
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      v11,
      v10,
      (__int64)&WPP_1e2c66cd4e403eb679a1b1edce07a74a_Traceguids,
      v8);
    goto LABEL_18;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      2,
      10,
      (__int64)&WPP_1e2c66cd4e403eb679a1b1edce07a74a_Traceguids,
      v3);
  }
}
