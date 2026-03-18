/*
 * XREFs of ?QueryInterface@CColorKeyBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180224320
 * Callers:
 *     ?QueryInterface@CColorKeyBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802E43B0 (-QueryInterface@CColorKeyBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CColorKeyBitmap::QueryInterface(
        volatile signed __int32 *this,
        _QWORD *a2,
        volatile signed __int32 **a3)
{
  return CMILCOMBaseT<ID2DBitmapCacheSource,ID2DBitmapCacheSource,CMilObjectDeleter>::InternalQueryInterface(
           this,
           a2,
           a3);
}
