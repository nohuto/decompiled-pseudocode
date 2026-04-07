/*
 * XREFs of wil_details_RecordCachedUsage @ 0x18005EC30
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18000889C (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18000890C (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 */

void __fastcall wil_details_RecordCachedUsage(wil::details *this, __int64 a2)
{
  unsigned int v3; // esi
  unsigned __int32 v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // ebx
  _QWORD *v7; // rdi
  _DWORD v8[9]; // [rsp+20h] [rbp-50h] BYREF
  int v9; // [rsp+44h] [rbp-2Ch]
  int v10; // [rsp+48h] [rbp-28h]
  int v11; // [rsp+4Ch] [rbp-24h]
  int v12; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+54h] [rbp-1Ch]
  int v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+5Ch] [rbp-14h]

  v3 = (unsigned int)this;
  _m_prefetchw((const void *)a2);
  v4 = _InterlockedAnd((volatile signed __int32 *)a2, 0xFFC0401E);
  v5 = (v4 >> 1) & 0xF;
  if ( v5 )
  {
    _m_prefetchw((const void *)(a2 + 4));
    v5 &= ~_InterlockedOr((volatile signed __int32 *)(a2 + 4), v5);
  }
  v8[0] = 2;
  v8[1] = v5 & 1;
  v8[2] = 6;
  v8[3] = ((unsigned __int8)v5 >> 1) & 1;
  v8[4] = 3;
  v8[5] = ((unsigned __int8)v5 >> 2) & 1;
  v8[6] = 7;
  v8[7] = v5 >= 8;
  v8[8] = 0;
  v10 = 4;
  if ( (v4 & 0x4000) != 0 )
  {
    v9 = 0;
    v11 = (v4 >> 5) & 0x1FF;
  }
  else
  {
    v9 = (v4 >> 5) & 0x1FF;
    v11 = 0;
  }
  v12 = 1;
  v14 = 5;
  if ( (v4 & 0x400000) != 0 )
  {
    v13 = 0;
    v15 = (v4 >> 15) & 0x7F;
  }
  else
  {
    v13 = (v4 >> 15) & 0x7F;
    v15 = 0;
  }
  v6 = 0;
  v7 = v8;
  do
  {
    if ( HIDWORD(*v7) )
      wil::details::WilApi_RecordFeatureUsage((wil::details *)v3);
    ++v6;
    ++v7;
  }
  while ( v6 < 8 );
}
