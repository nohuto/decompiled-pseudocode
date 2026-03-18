/*
 * XREFs of ?QueryInterface@CCachedImageProducer@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802850B0
 * Callers:
 *     ?QueryInterface@CCachedImageProducer@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802850C0 (-QueryInterface@CCachedImageProducer@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCachedImageProducer::QueryInterface(__int64 this, _QWORD *a2, _QWORD *a3)
{
  return CMILCOMBaseT<IBitmapResource,IBitmapResource,CMilObjectDeleter>::InternalQueryInterface(this, a2, a3);
}
