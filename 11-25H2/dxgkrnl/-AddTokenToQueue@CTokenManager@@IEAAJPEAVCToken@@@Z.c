/*
 * XREFs of ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x14000F2E4
 * Callers:
 *     ?AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z @ 0x140097DD0 (-AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z.c)
 *     ?AddTokenToQueueAndSignalTokenEvent@CTokenManager@@UEAAJPEAVCToken@@@Z @ 0x140097EA0 (-AddTokenToQueueAndSignalTokenEvent@CTokenManager@@UEAAJPEAVCToken@@@Z.c)
 *     ?AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x140097EF0 (-AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 * Callees:
 *     ?Create@CTokenQueue@@SAJPEAPEAV1@@Z @ 0x14000F28C (-Create@CTokenQueue@@SAJPEAPEAV1@@Z.c)
 *     ?AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z @ 0x140037A68 (-AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTokenManager::AddTokenToQueue(CTokenManager *this, struct CToken *a2)
{
  int v4; // esi
  struct _RTL_GENERIC_TABLE *v5; // rbp
  __int64 v6; // rdx
  _QWORD *inserted; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rdi
  __int64 **v11; // r14
  __int64 *v12; // rax
  _QWORD Buffer[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 NewElement; // [rsp+58h] [rbp+10h] BYREF
  struct CTokenQueue *v16; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    CTokenQueue::AddToken((CTokenManager *)((char *)this + 360), a2);
  }
  else
  {
    v5 = (struct _RTL_GENERIC_TABLE *)((char *)this + 200);
    Buffer[0] = *((_QWORD *)a2 + 6);
    Buffer[1] = 0LL;
    NewElement = 0;
    inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 200), Buffer, 0x10u, &NewElement);
    if ( inserted )
    {
      if ( NewElement )
      {
        v16 = 0LL;
        v4 = CTokenQueue::Create(&v16, v6, v8, v9);
        if ( v4 < 0 )
        {
          RtlDeleteElementGenericTable(v5, inserted);
          inserted = 0LL;
        }
        else
        {
          inserted[1] = v16;
        }
      }
      if ( v4 >= 0 )
      {
        v10 = (__int64 *)inserted[1];
        v11 = (__int64 **)((char *)a2 + 8);
        *((_DWORD *)v10 + 6) = 0;
        v12 = (__int64 *)*v10;
        if ( *(__int64 **)(*v10 + 8) != v10 )
          __fastfail(3u);
        *v11 = v12;
        *((_QWORD *)a2 + 2) = v10;
        v12[1] = (__int64)v11;
        *v10 = (__int64)v11;
        if ( *((_DWORD *)a2 + 6) == 2 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)a2 + 104LL))(a2) )
            v10[2] = (__int64)a2;
          if ( (*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)a2 + 96LL))(a2)
            && (*v11 == v10 || (*(unsigned __int8 (__fastcall **)(__int64 *))(*(*v11 - 1) + 88))(*v11 - 1)) )
          {
            (*(void (__fastcall **)(struct CToken *))(*(_QWORD *)a2 + 80LL))(a2);
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v4;
}
