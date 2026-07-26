/*
 * XREFs of ?ndisMInvokeDriverUnload@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_DRIVER_OBJECT@@@Z @ 0x1401430AC
 * Callers:
 *     ?ndisMUnloadEx@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140085520 (-ndisMUnloadEx@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     _tlgKeywordOn @ 0x14008DAF0 (_tlgKeywordOn.c)
 *     ??1MiniportDriverUnload@AzTelemetry@@UEAA@XZ @ 0x140097670 (--1MiniportDriverUnload@AzTelemetry@@UEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMInvokeDriverUnload(struct _NDIS_M_DRIVER_BLOCK *a1, struct _DRIVER_OBJECT *a2)
{
  _DRIVER_OBJECT *v2; // rdi
  char v4; // al
  int v5; // edx
  LARGE_INTEGER v6; // [rsp+30h] [rbp-38h] BYREF
  char v7; // [rsp+38h] [rbp-30h]
  struct _NDIS_M_DRIVER_BLOCK *v8; // [rsp+40h] [rbp-28h]
  LARGE_INTEGER PerformanceFrequency[2]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v10; // [rsp+58h] [rbp-10h]

  v2 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      229,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
  }
  v6.QuadPart = (LONGLONG)&AzTelemetry::Details::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,void>::`vftable';
  if ( (unsigned int)dword_1401247B0 > 4 && tlgKeywordOn((__int64)&dword_1401247B0, 512LL) )
  {
    v7 = 1;
    v4 = 1;
  }
  else
  {
    v7 = 0;
    v4 = 0;
  }
  v10 = 0LL;
  v8 = a1;
  *(_OWORD *)&PerformanceFrequency[0].LowPart = 0LL;
  if ( v4 )
    PerformanceFrequency[0] = KeQueryPerformanceCounter(&PerformanceFrequency[1]);
  v6.QuadPart = (LONGLONG)&AzTelemetry::MiniportDriverUnload::`vftable';
  a1->MiniportDriverCharacteristics.UnloadHandler(v2);
  AzTelemetry::MiniportDriverUnload::~MiniportDriverUnload(&v6);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      1,
      230,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
  }
}
