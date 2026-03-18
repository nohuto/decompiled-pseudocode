/*
 * XREFs of ObpDereferenceNamedObject @ 0x140370914
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140915990 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x140256FE0 (KeAreAllApcsDisabled.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140372210 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 *     ObpDeleteNameCheck @ 0x14085AF80 (ObpDeleteNameCheck.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409CF610 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409CF758 (ObpDeregisterObject.c)
 */

void __fastcall ObpDereferenceNamedObject(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 BugCheckParameter4; // rax
  __int64 v5; // rax

  if ( _InterlockedExchangeAdd(
         (volatile signed __int32 *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3] + 24),
         0xFFFFFFFF) == 1 )
    ObpDeleteNameCheck(a1);
  if ( ObpTraceFlags )
    ObpPushStackInfo(a1, 0, 1u, 0x746C6644u);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)a1, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  BugCheckParameter4 = v2 - 1;
  if ( v3 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)],
        a1 + 48,
        1uLL,
        *(_QWORD *)(a1 + 8));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, a1 + 48, 2uLL, BugCheckParameter4);
    if ( KeAreAllApcsDisabled() )
    {
      ObpDeferObjectDeletion(a1);
    }
    else
    {
      v5 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(a1);
      if ( v5 )
        ObpHandleRevocationBlockRemoveObject(v5);
      if ( ObpTraceFlags )
        ObpDeregisterObject(a1);
      ObpRemoveObjectRoutine(a1, 0LL);
    }
  }
}
