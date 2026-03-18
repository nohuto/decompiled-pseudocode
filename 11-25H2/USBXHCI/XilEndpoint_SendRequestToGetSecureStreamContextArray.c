/*
 * XREFs of XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x140046C90
 * Callers:
 *     XilEndpoint_FetchStreamContextArray @ 0x14000F694 (XilEndpoint_FetchStreamContextArray.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     memmove @ 0x1400597C0 (memmove.c)
 */

__int64 __fastcall XilEndpoint_SendRequestToGetSecureStreamContextArray(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *a5)
{
  __int64 v5; // rdi
  size_t v7; // r14
  unsigned int v9; // ebx
  int *Pool2; // rsi
  int v11; // ebx
  unsigned __int16 v12; // r9
  int v14; // [rsp+28h] [rbp-58h]
  int v15; // [rsp+30h] [rbp-50h]
  __int64 v16; // [rsp+40h] [rbp-40h]
  _BYTE v17[44]; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+74h] [rbp-Ch]

  v5 = *(_QWORD *)(a1 + 32);
  v18 = 0;
  memset(&v17[4], 0, 40);
  v7 = 16LL * a4;
  v16 = *(_QWORD *)(*(_QWORD *)v5 + 112LL);
  if ( v7 > 0xFFFFFFFF || (v9 = v7 + 4, (int)v7 + 4 < (unsigned int)v7) )
    v9 = 0;
  Pool2 = (int *)ExAllocatePool2(64LL, v9, 1229146200LL);
  if ( Pool2 )
  {
    memset(v17, 0, 24);
    *(_QWORD *)&v17[32] = 36LL;
    *(_QWORD *)&v17[24] = a2;
    *(_DWORD *)&v17[40] = 0;
    v18 = a4;
    v11 = SecureChannel_SendRequestSynchronously(v16, (GUID *)v17, 48, (__int64)Pool2, v9);
    if ( v11 >= 0 )
    {
      v11 = *Pool2;
      if ( *Pool2 >= 0 )
      {
        memmove(a5, Pool2 + 1, v7);
        v11 = 0;
        goto LABEL_16;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 23;
        v15 = *(_DWORD *)(v5 + 144);
        v14 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
        goto LABEL_11;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 22;
      v15 = *(_DWORD *)(v5 + 144);
      v14 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
LABEL_11:
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(v5 + 80),
        2u,
        0xDu,
        v12,
        (__int64)&WPP_0fad196ed6f839af1910845e6c92cab5_Traceguids,
        v14,
        v15);
    }
LABEL_16:
    ExFreePoolWithTag(Pool2, 0x49434858u);
    return (unsigned int)v11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v5 + 80),
      2u,
      0xDu,
      0x15u,
      (__int64)&WPP_0fad196ed6f839af1910845e6c92cab5_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL),
      *(_DWORD *)(v5 + 144),
      v9);
  return (unsigned int)-1073741670;
}
