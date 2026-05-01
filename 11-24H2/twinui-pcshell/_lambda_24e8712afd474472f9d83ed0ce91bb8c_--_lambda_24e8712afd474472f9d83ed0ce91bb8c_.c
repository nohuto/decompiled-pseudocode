/*
 * XREFs of _lambda_24e8712afd474472f9d83ed0ce91bb8c_::_lambda_24e8712afd474472f9d83ed0ce91bb8c_ @ 0x1803B47EC
 * Callers:
 *     ?UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18007CAC8 (-UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall lambda_24e8712afd474472f9d83ed0ce91bb8c_::_lambda_24e8712afd474472f9d83ed0ce91bb8c_(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
  a1[1] = *a3;
  a1[2] = *a4;
  return a1;
}
