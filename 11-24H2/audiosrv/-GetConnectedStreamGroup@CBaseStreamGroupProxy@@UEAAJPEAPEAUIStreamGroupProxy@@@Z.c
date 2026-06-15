/*
 * XREFs of ?GetConnectedStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x18006EFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::GetConnectedStreamGroup(
        CBaseStreamGroupProxy *this,
        struct IStreamGroupProxy **a2)
{
  return (**(__int64 (__fastcall ***)(CBaseStreamGroupProxy *, GUID *, struct IStreamGroupProxy **))this)(
           this,
           &GUID_040fc393_aad6_453d_9a52_2ea63773235d,
           a2);
}
