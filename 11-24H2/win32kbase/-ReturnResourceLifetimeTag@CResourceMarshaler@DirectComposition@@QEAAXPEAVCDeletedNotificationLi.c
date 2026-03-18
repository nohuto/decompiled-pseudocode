/*
 * XREFs of ?ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationList@2@@Z @ 0x1400DE33C
 * Callers:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     memmove @ 0x14023FA40 (memmove.c)
 */

void __fastcall DirectComposition::CResourceMarshaler::ReturnResourceLifetimeTag(
        DirectComposition::CResourceMarshaler *this,
        struct DirectComposition::CDeletedNotificationList *a2)
{
  size_t v4; // r8
  __int64 Src; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 6) )
  {
    v4 = *((_QWORD *)a2 + 4);
    Src = *((_QWORD *)this + 6);
    memmove(
      (void *)(*(_QWORD *)a2
             + v4
             * ((unsigned __int64)(unsigned int)(*((_DWORD *)a2 + 11) + *((_DWORD *)a2 + 10)) % *((_QWORD *)a2 + 3))),
      &Src,
      v4);
    ++*((_DWORD *)a2 + 11);
    --*((_DWORD *)a2 + 12);
    *((_QWORD *)this + 6) = 0LL;
  }
}
