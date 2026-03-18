/*
 * XREFs of ?DxgkpEscapeStopAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14018CC40
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002D3C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x14004F6E8 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkInvalidateDeviceState @ 0x140062D20 (DxgkInvalidateDeviceState.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 __fastcall DxgkpEscapeStopAdapters(PVOID *this, _BYTE *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  _QWORD *v10; // rax
  PVOID v12; // rsi
  _BYTE v13[144]; // [rsp+20h] [rbp-B8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, (struct DXGADAPTER *const)this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13, 0LL);
  v9 = 0;
  if ( v4 >= 0 )
  {
    v12 = this[27];
    if ( v12 )
    {
      ObfReferenceObject(this[27]);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v13);
      if ( !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)this)
        && (*((_DWORD *)this + 111) & 0x10) == 0
        && ((_DWORD)this[372] & 8) == 0 )
      {
        a2[1] = 1;
        DxgkInvalidateDeviceState((__int64)this[27]);
      }
      ObfDereferenceObject(v12);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
      return 0LL;
    }
    else
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
      return 3221225473LL;
    }
  }
  else
  {
    if ( v4 == -1073741130 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
      v10[3] = this;
      v10[4] = *((int *)this + 104);
      v10[5] = *((unsigned int *)this + 103);
      WdLogGlobalForLineNumber = 12879;
    }
    else
    {
      v9 = v4;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
    return v9;
  }
}
