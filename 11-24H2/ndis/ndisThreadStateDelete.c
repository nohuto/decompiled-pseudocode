/*
 * XREFs of ndisThreadStateDelete @ 0x1400E48A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_ETHREAD@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400E3F6C (--1-$unique_storage@U-$resource_policy@PEAU_ETHREAD@@$$A6A_JPEAX@Z$1-ObfDereferenceObject@@YA_J0.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisThreadStateDelete(__int64 *a1)
{
  void (__fastcall *v2)(__int64); // rdi
  __int64 v3; // rsi
  int v4; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      27,
      11,
      (struct _GUID *)&WPP_12cb3fcd1e2d3901272ccddd1e9630db_Traceguids,
      (char)a1);
  v2 = (void (__fastcall *)(__int64))a1[2];
  v3 = a1[3];
  if ( v2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        27,
        12,
        (struct _GUID *)&WPP_12cb3fcd1e2d3901272ccddd1e9630db_Traceguids,
        a1[1]);
    v2(v3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        27,
        13,
        (struct _GUID *)&WPP_12cb3fcd1e2d3901272ccddd1e9630db_Traceguids);
    }
  }
  return wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>(a1);
}
