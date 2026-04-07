/*
 * XREFs of ?AdjustSnapUIArrangementStartRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@PEAU4563@@Z @ 0x1800FA9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdjustSnapUIArrangementStartRect@CTopLevelWindow3D@@QEAA?AUMilPointAndSizeF@@AEBU2@@Z @ 0x1800E7060 (-AdjustSnapUIArrangementStartRect@CTopLevelWindow3D@@QEAA-AUMilPointAndSizeF@@AEBU2@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::AdjustSnapUIArrangementStartRect(
        __int64 a1,
        __int128 *a2,
        __int128 *a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v4 = a1 + 24;
  if ( !a1 )
    v4 = 32LL;
  v6 = *a2;
  try
  {
    CTopLevelWindow3D::AdjustSnapUIArrangementStartRect(*(_QWORD *)v4, (__int64)&v7, &v6);
    v6 = v7;
    *a3 = v7;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
