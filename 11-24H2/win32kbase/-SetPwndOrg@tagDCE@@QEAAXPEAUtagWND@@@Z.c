/*
 * XREFs of ?SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x14000EF9C
 * Callers:
 *     CreateCacheDC @ 0x14000E010 (CreateCacheDC.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 *     DestroyCacheDC @ 0x1401689F0 (DestroyCacheDC.c)
 * Callees:
 *     <none>
 */

void __fastcall tagDCE::SetPwndOrg(tagDCE *this, struct tagWND *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 *v3; // rcx
  __int64 v4; // r8
  unsigned __int64 *v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 **v7; // rax
  unsigned __int64 **v8; // r9
  unsigned __int64 **v9; // rdx

  *((_QWORD *)this + 10) = a2;
  v2 = (unsigned __int64)a2 + 320;
  v3 = (unsigned __int64 *)((char *)this + 104);
  v4 = -(__int64)(a2 != 0LL);
  v5 = (unsigned __int64 *)*v3;
  v6 = v2 & v4;
  if ( (unsigned __int64 *)*v3 == v3 )
  {
    v7 = (unsigned __int64 **)(v3 + 1);
  }
  else
  {
    if ( (unsigned __int64 *)v5[1] != v3 )
      goto LABEL_9;
    v7 = (unsigned __int64 **)(v3 + 1);
    v8 = (unsigned __int64 **)v3[1];
    if ( *v8 != v3 )
      goto LABEL_9;
    *v8 = v5;
    v5[1] = (unsigned __int64)v8;
  }
  if ( v6 )
  {
    v9 = *(unsigned __int64 ***)(v6 + 8);
    if ( *v9 == (unsigned __int64 *)v6 )
    {
      *v3 = v6;
      *v7 = (unsigned __int64 *)v9;
      *v9 = v3;
      *(_QWORD *)(v6 + 8) = v3;
      return;
    }
LABEL_9:
    __fastfail(3u);
  }
  *v7 = v3;
  *v3 = (unsigned __int64)v3;
}
