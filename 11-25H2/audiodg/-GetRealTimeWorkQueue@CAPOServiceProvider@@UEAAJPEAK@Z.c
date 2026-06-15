/*
 * XREFs of ?GetRealTimeWorkQueue@CAPOServiceProvider@@UEAAJPEAK@Z @ 0x140044D40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _Init_thread_footer @ 0x140059338 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1400593A0 (_Init_thread_header.c)
 *     ?GetApoWorkQueueId@CAPOServiceProvider@@AEAAKXZ @ 0x14006399C (-GetApoWorkQueueId@CAPOServiceProvider@@AEAAKXZ.c)
 */

__int64 __fastcall CAPOServiceProvider::GetRealTimeWorkQueue(CAPOServiceProvider *this, unsigned int *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( dword_1400C5828 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
    {
      Init_thread_header(&dword_1400C5828);
      if ( dword_1400C5828 == -1 )
      {
        dword_1400C582C = CAPOServiceProvider::GetApoWorkQueueId((CAPOServiceProvider *)((char *)this - 16));
        Init_thread_footer(&dword_1400C5828);
      }
    }
    *a2 = dword_1400C582C;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\aposerviceprovider.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
