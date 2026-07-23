/*
 * XREFs of KasaniReport @ 0x1405A7020
 * Callers:
 *     KasanValidateAddress @ 0x1405A6D60 (KasanValidateAddress.c)
 *     __asan_load1 @ 0x1405A81E0 (__asan_load1.c)
 *     __asan_load16 @ 0x1405A8290 (__asan_load16.c)
 *     __asan_load16_volatile @ 0x1405A84C0 (__asan_load16_volatile.c)
 *     __asan_load1_volatile @ 0x1405A86F0 (__asan_load1_volatile.c)
 *     __asan_load2 @ 0x1405A87A0 (__asan_load2.c)
 *     __asan_load2_volatile @ 0x1405A8890 (__asan_load2_volatile.c)
 *     __asan_load4 @ 0x1405A8980 (__asan_load4.c)
 *     __asan_load4_volatile @ 0x1405A8AA0 (__asan_load4_volatile.c)
 *     __asan_load8 @ 0x1405A8BC0 (__asan_load8.c)
 *     __asan_load8_volatile @ 0x1405A8D10 (__asan_load8_volatile.c)
 *     __asan_loadN @ 0x1405A8E60 (__asan_loadN.c)
 *     __asan_loadN_volatile @ 0x1405A8F50 (__asan_loadN_volatile.c)
 *     __asan_memcpy @ 0x1405A9040 (__asan_memcpy.c)
 *     __asan_memset @ 0x1405A9200 (__asan_memset.c)
 *     __asan_report_load1 @ 0x1405A9310 (__asan_report_load1.c)
 *     __asan_report_load16 @ 0x1405A9340 (__asan_report_load16.c)
 *     __asan_report_load2 @ 0x1405A9370 (__asan_report_load2.c)
 *     __asan_report_load4 @ 0x1405A93A0 (__asan_report_load4.c)
 *     __asan_report_load8 @ 0x1405A93D0 (__asan_report_load8.c)
 *     __asan_report_loadN @ 0x1405A9400 (__asan_report_loadN.c)
 *     __asan_report_store1 @ 0x1405A9430 (__asan_report_store1.c)
 *     __asan_report_store16 @ 0x1405A9460 (__asan_report_store16.c)
 *     __asan_report_store2 @ 0x1405A9490 (__asan_report_store2.c)
 *     __asan_report_store4 @ 0x1405A94C0 (__asan_report_store4.c)
 *     __asan_report_store8 @ 0x1405A94F0 (__asan_report_store8.c)
 *     __asan_report_storeN @ 0x1405A9520 (__asan_report_storeN.c)
 *     __asan_store1 @ 0x1405A9570 (__asan_store1.c)
 *     __asan_store16 @ 0x1405A9620 (__asan_store16.c)
 *     __asan_store16_volatile @ 0x1405A9850 (__asan_store16_volatile.c)
 *     __asan_store1_volatile @ 0x1405A9A80 (__asan_store1_volatile.c)
 *     __asan_store2 @ 0x1405A9B30 (__asan_store2.c)
 *     __asan_store2_volatile @ 0x1405A9C20 (__asan_store2_volatile.c)
 *     __asan_store4 @ 0x1405A9D10 (__asan_store4.c)
 *     __asan_store4_volatile @ 0x1405A9E30 (__asan_store4_volatile.c)
 *     __asan_store8 @ 0x1405A9F50 (__asan_store8.c)
 *     __asan_store8_volatile @ 0x1405AA0A0 (__asan_store8_volatile.c)
 *     __asan_storeN @ 0x1405AA1F0 (__asan_storeN.c)
 *     __asan_storeN_volatile @ 0x1405AA2E0 (__asan_storeN_volatile.c)
 *     __asan_wrap_memchr @ 0x1405AA3D0 (__asan_wrap_memchr.c)
 *     __asan_wrap_memcmp @ 0x1405AA4E0 (__asan_wrap_memcmp.c)
 *     __asan_wrap_strcat @ 0x1405AA6A0 (__asan_wrap_strcat.c)
 *     __asan_wrap_strcmp @ 0x1405AA900 (__asan_wrap_strcmp.c)
 *     __asan_wrap_strcpy @ 0x1405AAAA0 (__asan_wrap_strcpy.c)
 *     __asan_wrap_strlen @ 0x1405AAC50 (__asan_wrap_strlen.c)
 *     __asan_wrap_strncmp @ 0x1405AAD40 (__asan_wrap_strncmp.c)
 *     __asan_wrap_strncpy @ 0x1405AAED0 (__asan_wrap_strncpy.c)
 *     __asan_wrap_wcslen @ 0x1405AB080 (__asan_wrap_wcslen.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

struct _KTHREAD *__fastcall KasaniReport(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a3,
        ULONG_PTR a4,
        unsigned __int8 a5)
{
  struct _KTHREAD *result; // rax
  volatile signed __int32 *v9; // rdx
  int v10; // ecx
  __int64 v11; // r8
  _QWORD *v12; // rax
  signed __int32 v13; // eax
  volatile signed __int32 *v14; // rbx

  if ( !byte_140FCECA9 )
    KeBugCheckEx(0x1F2u, BugCheckParameter1, BugCheckParameter2, a4, a5 | ((unsigned __int64)a3 << 8));
  result = KeGetCurrentThread();
  if ( !_interlockedbittestandset(&result->ThreadFlags2, 0) )
  {
    v9 = (volatile signed __int32 *)qword_140FCECB8;
    if ( qword_140FCECB8 )
    {
      v10 = 64;
    }
    else
    {
      v9 = (volatile signed __int32 *)&KasaniReportsBoot;
      v10 = 4;
    }
    if ( *v9 <= v10 )
    {
      v11 = 0LL;
      v12 = v9 + 2;
      while ( v11 < *(int *)v9 )
      {
        if ( v12[3] == a4 || *v12 == BugCheckParameter1 )
          goto LABEL_15;
        ++v11;
        v12 += 21;
      }
      v13 = _InterlockedIncrement(v9);
      if ( v13 <= v10 )
      {
        v14 = &v9[42 * v13 - 42];
        *((_QWORD *)v14 + 4) = a4;
        *((_QWORD *)v14 + 1) = BugCheckParameter1;
        *((_QWORD *)v14 + 2) = BugCheckParameter2;
        *((_BYTE *)v14 + 24) = a3;
        *((_BYTE *)v14 + 40) = a5;
        RtlCaptureStackBackTrace(0, 0x10u, (PVOID *)v14 + 6, 0LL);
        *((_BYTE *)v14 + 41) = 1;
      }
    }
LABEL_15:
    result = KeGetCurrentThread();
    _interlockedbittestandreset(&result->ThreadFlags2, 0);
  }
  return result;
}
