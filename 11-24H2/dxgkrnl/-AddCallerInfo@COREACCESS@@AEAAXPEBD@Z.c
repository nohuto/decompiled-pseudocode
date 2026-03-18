/*
 * XREFs of ?AddCallerInfo@COREACCESS@@AEAAXPEBD@Z @ 0x14000F460
 * Callers:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14000F358 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 * Callees:
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x14000E530 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 */

void __fastcall COREACCESS::AddCallerInfo(COREACCESS *this, const char *a2)
{
  __int64 v2; // r10
  __int64 v3; // r11

  *((_QWORD *)this + 4) = 0LL;
  if ( a2 )
  {
    if ( (int)RtlStringCbCopyA((char *)this + 40, 17LL, a2) >= 0 )
      *(_QWORD *)(v2 + 32) = v3;
  }
}
