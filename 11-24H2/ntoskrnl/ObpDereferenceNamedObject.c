/*
 * XREFs of ObpDereferenceNamedObject @ 0x1403C1AC8
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1409E45C0 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     KeAreAllApcsDisabled @ 0x1403C3440 (KeAreAllApcsDisabled.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1403C3480 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x140846830 (ObpRemoveObjectRoutine.c)
 *     ObpDeleteNameCheck @ 0x14089B690 (ObpDeleteNameCheck.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409D2920 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409D2A68 (ObpDeregisterObject.c)
 */

signed __int64 __fastcall ObpDereferenceNamedObject(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 result; // rax
  __int64 v5; // rax

  if ( _InterlockedExchangeAdd(
         (volatile signed __int32 *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3] + 24),
         0xFFFFFFFF) == 1 )
    ObpDeleteNameCheck(a1);
  if ( ObpTraceFlags )
    ObpPushStackInfo(a1, 0, 1u, 0x746C6644u);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)a1, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  result = v2 - 1;
  if ( v3 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)],
        a1 + 48,
        1uLL,
        *(_QWORD *)(a1 + 8));
    if ( result < 0 )
      KeBugCheckEx(0x18u, 0LL, a1 + 48, 2uLL, result);
    if ( KeAreAllApcsDisabled() )
    {
      return ObpDeferObjectDeletion(a1);
    }
    else
    {
      v5 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(a1);
      if ( v5 )
        ObpHandleRevocationBlockRemoveObject(v5);
      if ( ObpTraceFlags )
        ObpDeregisterObject(a1);
      return ObpRemoveObjectRoutine(a1, 0LL);
    }
  }
  return result;
}
