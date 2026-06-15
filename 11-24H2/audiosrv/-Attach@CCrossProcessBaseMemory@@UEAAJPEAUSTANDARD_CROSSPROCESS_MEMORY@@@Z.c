/*
 * XREFs of ?Attach@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x18005FE60
 * Callers:
 *     ?Attach@?$CCrossProcessClientMemory@UControlData_V0@@@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z @ 0x1801659D0 (-Attach@-$CCrossProcessClientMemory@UControlData_V0@@@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z.c)
 *     ?Attach@CCrossProcessKSMemory@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z @ 0x180165D00 (-Attach@CCrossProcessKSMemory@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close_reset@?$close_invoke_helper@$00P6AHPEAX@Z$1?CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@Z @ 0x18006EFDC (-close_reset@-$close_invoke_helper@$00P6AHPEAX@Z$1-CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@.c)
 */

__int64 __fastcall CCrossProcessBaseMemory::Attach(
        CCrossProcessBaseMemory *this,
        struct STANDARD_CROSSPROCESS_MEMORY *a2)
{
  __int64 v2; // rsi
  char *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)a2;
  if ( ((*(_QWORD *)a2 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v6 = (char *)*((_QWORD *)this + 2);
    if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      wil::details::close_invoke_helper<1,int (*)(void *),&int CloseHandle(void *),void *>::close_reset(v6);
    *((_QWORD *)this + 2) = v2;
    *(_QWORD *)a2 = 0LL;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA,
      (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
      (const char *)0x80070006LL);
    return 2147942406LL;
  }
}
