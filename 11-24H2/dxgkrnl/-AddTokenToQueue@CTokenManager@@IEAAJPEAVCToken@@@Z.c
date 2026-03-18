/*
 * XREFs of ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x14001E764
 * Callers:
 *     ?AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z @ 0x14009A000 (-AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z.c)
 *     ?AddTokenToQueueAndSignalTokenEvent@CTokenManager@@UEAAJPEAVCToken@@@Z @ 0x14009A0D0 (-AddTokenToQueueAndSignalTokenEvent@CTokenManager@@UEAAJPEAVCToken@@@Z.c)
 *     ?AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x14009A120 (-AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 * Callees:
 *     ?Create@CTokenQueue@@SAJPEAPEAV1@@Z @ 0x14001E70C (-Create@CTokenQueue@@SAJPEAPEAV1@@Z.c)
 *     ?AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z @ 0x1400376E8 (-AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTokenManager::AddTokenToQueue(CTokenManager *this, struct CToken *a2)
{
  int v4; // esi
  struct _RTL_GENERIC_TABLE *v5; // rbp
  _QWORD *inserted; // rdi
  __int64 *v7; // rdi
  __int64 **v8; // r14
  __int64 *v9; // rax
  _QWORD Buffer[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 NewElement; // [rsp+58h] [rbp+10h] BYREF
  struct CTokenQueue *v13; // [rsp+60h] [rbp+18h] BYREF

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
        v13 = 0LL;
        v4 = CTokenQueue::Create(&v13);
        if ( v4 < 0 )
        {
          RtlDeleteElementGenericTable(v5, inserted);
          inserted = 0LL;
        }
        else
        {
          inserted[1] = v13;
        }
      }
      if ( v4 >= 0 )
      {
        v7 = (__int64 *)inserted[1];
        v8 = (__int64 **)((char *)a2 + 8);
        *((_DWORD *)v7 + 6) = 0;
        v9 = (__int64 *)*v7;
        if ( *(__int64 **)(*v7 + 8) != v7 )
          __fastfail(3u);
        *v8 = v9;
        *((_QWORD *)a2 + 2) = v7;
        v9[1] = (__int64)v8;
        *v7 = (__int64)v8;
        if ( *((_DWORD *)a2 + 6) == 2 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)a2 + 104LL))(a2) )
            v7[2] = (__int64)a2;
          if ( (*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)a2 + 96LL))(a2)
            && (*v8 == v7 || (*(unsigned __int8 (__fastcall **)(__int64 *))(*(*v8 - 1) + 88))(*v8 - 1)) )
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
