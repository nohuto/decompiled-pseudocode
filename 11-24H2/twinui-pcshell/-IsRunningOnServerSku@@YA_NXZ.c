/*
 * XREFs of ?IsRunningOnServerSku@@YA_NXZ @ 0x1802B4C24
 * Callers:
 *     ?IsRunningOnServerSku@KeyboardHosting@@YA_NXZ @ 0x1802B4C08 (-IsRunningOnServerSku@KeyboardHosting@@YA_NXZ.c)
 * Callees:
 *     _Init_thread_footer @ 0x1802D4F08 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D4F70 (_Init_thread_header.c)
 */

bool IsRunningOnServerSku(void)
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  if ( __TSS0__1__IsRunningOnServerSku__YA_NXZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                 + (unsigned int)tls_index)
                                                               + 16LL) )
  {
    Init_thread_header(&__TSS0__1__IsRunningOnServerSku__YA_NXZ_4HA);
    if ( __TSS0__1__IsRunningOnServerSku__YA_NXZ_4HA == -1 )
    {
      v1 = 0;
      RtlGetDeviceFamilyInfoEnum(0LL, &v1, 0LL);
      `IsRunningOnServerSku'::`2'::deviceFamily = v1;
      Init_thread_footer(&__TSS0__1__IsRunningOnServerSku__YA_NXZ_4HA);
    }
  }
  return `IsRunningOnServerSku'::`2'::deviceFamily == 9;
}
