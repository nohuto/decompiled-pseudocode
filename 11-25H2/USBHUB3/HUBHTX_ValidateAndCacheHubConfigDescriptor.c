/*
 * XREFs of HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x140006594
 * Callers:
 *     HUBHSM_ValidatingHubConfigurationDescriptor @ 0x14000A400 (HUBHSM_ValidatingHubConfigurationDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003D35C (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memmove @ 0x140045DC0 (memmove.c)
 */

__int64 __fastcall HUBHTX_ValidateAndCacheHubConfigDescriptor(__int64 a1)
{
  __int16 v1; // ax
  unsigned __int16 *v2; // rbx
  unsigned __int16 *v4; // rsi
  unsigned int v5; // eax
  void *Pool2; // rax
  int v7; // edx
  int v8; // ebx
  unsigned __int16 v9; // dx
  __int64 v10; // rcx
  void *v11; // rcx
  _WORD v13[2]; // [rsp+40h] [rbp-48h] BYREF
  int v14; // [rsp+44h] [rbp-44h]
  __int128 v15; // [rsp+48h] [rbp-40h]
  __int64 (__fastcall *v16)(); // [rsp+58h] [rbp-30h]
  __int64 (__fastcall *v17)(); // [rsp+60h] [rbp-28h]
  __int64 v18; // [rsp+68h] [rbp-20h]
  __int64 v19; // [rsp+70h] [rbp-18h]

  v1 = *(_WORD *)(a1 + 2466);
  v2 = *(unsigned __int16 **)(a1 + 1264);
  v13[1] = 0;
  v15 = 0LL;
  v19 = 0LL;
  v4 = 0LL;
  v13[0] = v1;
  v14 = *(_DWORD *)(a1 + 256);
  v16 = HUBMISC_LogDescriptorValidationErrorForHub;
  v17 = HUBMISC_LogDescriptorValidationWarningForHub;
  v5 = v2[1];
  v18 = a1;
  if ( (unsigned __int16)v5 >= 0xFFu )
  {
LABEL_7:
    v9 = *(_WORD *)(a1 + 2612);
    v10 = *(_QWORD *)(a1 + 1264);
    if ( v9 >= *(_WORD *)(v10 + 2) )
      v9 = *(_WORD *)(v10 + 2);
    if ( (unsigned __int8)HUBDESC_ValidateConfigurationDescriptorSet(
                            v10,
                            v9,
                            (unsigned int)v13,
                            *(_QWORD *)(a1 + 2528),
                            0LL) )
    {
      if ( *(_WORD *)(*(_QWORD *)(a1 + 1264) + 2LL) == *(_WORD *)(a1 + 2612) )
      {
        v8 = 0;
        goto LABEL_16;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(a1 + 2528),
          2u,
          3u,
          0x16u,
          (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids,
          *(unsigned __int16 *)(*(_QWORD *)(a1 + 1264) + 2LL),
          *(unsigned __int16 *)(a1 + 2612));
      ((void (__fastcall *)(__int64, __int64))v16)(v18, 61LL);
    }
    v8 = -1073741823;
    goto LABEL_16;
  }
  v4 = v2;
  Pool2 = (void *)ExAllocatePool2(64LL, v5, 1748191317LL);
  *(_QWORD *)(a1 + 1264) = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, v2, v2[1]);
    goto LABEL_7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2528), v7, 3, 21, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids);
  }
  v8 = -1073741670;
LABEL_16:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x68334855u);
  if ( v8 < 0 )
  {
    v11 = *(void **)(a1 + 1264);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0x68334855u);
      *(_QWORD *)(a1 + 1264) = 0LL;
    }
  }
  return ((v8 >> 31) & 0xFFFFFFF8) + 2053;
}
