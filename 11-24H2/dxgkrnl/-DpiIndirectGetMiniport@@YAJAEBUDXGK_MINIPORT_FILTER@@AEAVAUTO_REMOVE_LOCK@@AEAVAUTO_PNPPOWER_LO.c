/*
 * XREFs of ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1403FC45C
 * Callers:
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x140184DD0 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x14002A7C8 (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x140041808 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x14004BC44 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x14004D6BC (-Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x14004D718 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x14004D960 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     ??0AUTO_MUTEX_LOCK@@QEAA@PEAU_KMUTANT@@_N@Z @ 0x140063E90 (--0AUTO_MUTEX_LOCK@@QEAA@PEAU_KMUTANT@@_N@Z.c)
 *     DpiGetDeviceInstanceId @ 0x14024A744 (DpiGetDeviceInstanceId.c)
 */

__int64 __fastcall DpiIndirectGetMiniport(
        const struct DXGK_MINIPORT_FILTER *a1,
        struct AUTO_REMOVE_LOCK *a2,
        struct AUTO_PNPPOWER_LOCK *a3,
        struct _FDO_CONTEXT **a4)
{
  char v4; // bl
  struct AUTO_REMOVE_LOCK *v5; // rdi
  int DeviceInstanceId; // r14d
  __int64 v8; // r15
  char v9; // r13
  _QWORD *v10; // rax
  _QWORD *i; // rsi
  AUTO_PNPPOWER_LOCK *v12; // rdi
  struct _DEVICE_OBJECT *v13; // rcx
  char v15; // [rsp+30h] [rbp-50h]
  PCWSTR SourceString; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v17[8]; // [rsp+40h] [rbp-40h] BYREF
  PRKMUTEX Mutex; // [rsp+48h] [rbp-38h]
  PVOID v19; // [rsp+50h] [rbp-30h] BYREF
  char v20; // [rsp+58h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v22[16]; // [rsp+70h] [rbp-10h] BYREF

  v4 = 0;
  v5 = a2;
  v15 = 0;
  DeviceInstanceId = 0;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    v4 = 1;
    v15 = 1;
  }
  v8 = qword_140160D48;
  v9 = 0;
  if ( (__int64 *)qword_140160D48 == &qword_140160D48 )
    goto LABEL_33;
  do
  {
    if ( *((_BYTE *)a1 + 4) || *(_BYTE *)(v8 + 134) )
    {
      AUTO_MUTEX_LOCK::AUTO_MUTEX_LOCK((AUTO_MUTEX_LOCK *)v17, (struct _KMUTANT *)(v8 + 72));
      v10 = (_QWORD *)(v8 + 56);
      for ( i = *(_QWORD **)(v8 + 56); i != v10; i = (_QWORD *)*i )
      {
        if ( i && *((_DWORD *)i + 4) == 1953656900 && *((_DWORD *)i + 5) == 2 )
        {
          v19 = i;
          AUTO_REMOVE_LOCK::Release((PVOID *)v5);
          *(_QWORD *)v5 = i;
          *((_BYTE *)v5 + 8) = 0;
          v20 = 0;
          AUTO_REMOVE_LOCK::Release(&v19);
          DeviceInstanceId = AUTO_REMOVE_LOCK::Acquire((struct _IO_REMOVE_LOCK **)v5);
          if ( DeviceInstanceId >= 0 )
          {
            v12 = AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v22, (struct _COMMON_PNP_CONTEXT *)i);
            AUTO_PNPPOWER_LOCK::Release(a3);
            *(_QWORD *)a3 = *(_QWORD *)v12;
            *((_BYTE *)a3 + 8) = *((_BYTE *)v12 + 8);
            *((_BYTE *)a3 + 9) = *((_BYTE *)v12 + 9);
            *((_BYTE *)a3 + 10) = *((_BYTE *)v12 + 10);
            *((_BYTE *)v12 + 10) = 0;
            AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v22);
            if ( *(_DWORD *)a1 == 1 )
            {
              if ( *((_DWORD *)i + 674) == *((_DWORD *)a1 + 2) && *((_DWORD *)i + 675) == *((_DWORD *)a1 + 3) )
              {
                *a4 = (struct _FDO_CONTEXT *)i;
                v9 = 1;
                goto LABEL_26;
              }
            }
            else if ( !*(_DWORD *)a1 )
            {
              v13 = (struct _DEVICE_OBJECT *)i[19];
              SourceString = 0LL;
              DeviceInstanceId = DpiGetDeviceInstanceId(v13, (ULONG_PTR *)&SourceString);
              if ( DeviceInstanceId < 0 )
                goto LABEL_25;
              DestinationString = 0LL;
              RtlInitUnicodeString(&DestinationString, SourceString);
              if ( !RtlCompareUnicodeString(&DestinationString, *((PCUNICODE_STRING *)a1 + 1), 1u) )
              {
                *a4 = (struct _FDO_CONTEXT *)i;
                v9 = 1;
LABEL_25:
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&SourceString);
LABEL_26:
                v5 = a2;
                break;
              }
              AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&SourceString);
            }
            AUTO_PNPPOWER_LOCK::Release(a3);
            v5 = a2;
          }
          else
          {
            DeviceInstanceId = 0;
          }
          v10 = (_QWORD *)(v8 + 56);
        }
      }
      if ( v17[0] )
      {
        KeReleaseMutex(Mutex, 0);
        v17[0] = 0;
      }
    }
    if ( DeviceInstanceId < 0 )
      break;
    v8 = *(_QWORD *)v8;
  }
  while ( (__int64 *)v8 != &qword_140160D48 );
  v4 = v15;
  if ( !v9 && DeviceInstanceId >= 0 )
LABEL_33:
    DeviceInstanceId = -1073741275;
  if ( v4 )
    ReleaseMiniportListMutex();
  return (unsigned int)DeviceInstanceId;
}
