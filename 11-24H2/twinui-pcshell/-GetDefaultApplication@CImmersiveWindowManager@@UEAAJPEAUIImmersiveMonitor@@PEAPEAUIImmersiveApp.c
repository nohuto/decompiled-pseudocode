/*
 * XREFs of ?GetDefaultApplication@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x1802F0BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$CopyTo@UIImmersiveApplication@@@?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBAJPEAPEAUIImmersiveApplication@@@Z @ 0x1802F063C (--$CopyTo@UIImmersiveApplication@@@-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBA.c)
 *     _lambda_272e15244083584e7f88f2c6a1e1f4d3_::operator() @ 0x1802F0838 (_lambda_272e15244083584e7f88f2c6a1e1f4d3_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveWindowManager::GetDefaultApplication(
        CImmersiveWindowManager *this,
        struct IImmersiveMonitor *a2,
        struct IImmersiveApplication **a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned int v7; // ebx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0LL;
  v10 = 0LL;
  v9[0] = a3;
  v9[1] = a2;
  v9[2] = &v10;
  v5 = *((_QWORD *)this + 10);
  v6 = 0LL;
  if ( v5 )
  {
    do
    {
      if ( !lambda_272e15244083584e7f88f2c6a1e1f4d3_::operator()(
              (__int64)v9,
              *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v6)) )
        break;
      ++v6;
    }
    while ( v6 < v5 );
    if ( v10 )
      Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::CopyTo<IImmersiveApplication>(&v10, (__int64)a3);
  }
  v7 = *a3 == 0LL ? 0x8002802B : 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  return v7;
}
