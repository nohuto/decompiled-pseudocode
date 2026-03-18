/*
 * XREFs of SendColorimetricControlToDriverCallback @ 0x1401C5890
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z @ 0x1401A23F8 (-DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z.c)
 */

__int64 __fastcall SendColorimetricControlToDriverCallback(DXGADAPTER *this, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _DXGKARG_CONTROLMODEBEHAVIOR v16; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v17[144]; // [rsp+30h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17, 0LL);
  v9 = 0;
  if ( v4 >= 0 )
  {
    if ( *((int *)this + 751) >= 2400 )
    {
      *(_QWORD *)&v16.Satisfied.0 = 0LL;
      v16.Request.Value = *(_DWORD *)(a2 + 20) != 0 ? 2 : 0;
      if ( (int)DXGADAPTER::DdiControlModeBehavior(this, &v16, v7) >= 0 )
      {
        if ( (*(_BYTE *)&v16.Satisfied.0 & 2) != 0 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = this;
          WdLogGlobalForLineNumber = 5196;
        }
        else if ( (*(_BYTE *)&v16.NotSatisfied.0 & 2) != 0 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = this;
          WdLogGlobalForLineNumber = 5201;
        }
        else
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = this;
          WdLogGlobalForLineNumber = 5206;
        }
      }
    }
  }
  else if ( v4 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = this;
    v10[4] = *((int *)this + 104);
    v10[5] = *((unsigned int *)this + 103);
    WdLogGlobalForLineNumber = 5176;
  }
  else
  {
    v9 = v4;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17);
  return v9;
}
