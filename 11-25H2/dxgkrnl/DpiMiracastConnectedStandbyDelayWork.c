/*
 * XREFs of DpiMiracastConnectedStandbyDelayWork @ 0x140244440
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x14031F900 (DxgkMiracastStopAllMiracastSessions.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

void __fastcall DpiMiracastConnectedStandbyDelayWork(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rdi
  struct _IO_WORKITEM *v4; // rbx
  _DWORD v5[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v6; // [rsp+28h] [rbp-48h]
  __int128 v7; // [rsp+30h] [rbp-40h]
  __int64 v8; // [rsp+40h] [rbp-30h]
  int v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+4Ch] [rbp-24h]
  int v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+54h] [rbp-1Ch]
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]

  v10 = 0;
  v9 = 0;
  v13 = 0;
  v14 = 0;
  v8 = 0LL;
  v5[0] = 6;
  v5[1] = 64;
  v6 = 0LL;
  v7 = 0LL;
  v11 = 73;
  v12 = 1;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v5, 0x200000000uLL);
  v2 = qword_14015E2C0;
  do
  {
    v3 = v2;
    v4 = (struct _IO_WORKITEM *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
    v2 = _InterlockedCompareExchange64(&qword_14015E2C0, v2 & 0xFFFFFFFFFFFFFFFCuLL, v2);
  }
  while ( v3 != v2 );
  DxgkMiracastStopAllMiracastSessions(0LL, 0LL, 136LL);
  if ( (v3 & 2) != 0 )
  {
    IoFreeWorkItem(v4);
    qword_14015E2C0 = 0LL;
  }
}
