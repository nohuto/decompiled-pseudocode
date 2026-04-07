/*
 * XREFs of ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x18002117C
 * Callers:
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x180020A20 (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180021154 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x180080838 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 */

void __fastcall CTopLevelWindow::UpdateCapturedButton(CTopLevelWindow *this, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  CButton *v8; // rcx
  CMILRefCountBase *v9; // rcx
  CButton *v10; // rcx
  CBaseObject *v11; // rcx

  LODWORD(v2) = 4;
  v4 = 4LL;
  v5 = a2 - 8;
  if ( !v5 )
  {
    v2 = 1LL;
    goto LABEL_10;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v4 = 2LL;
    LODWORD(v2) = 2;
    goto LABEL_6;
  }
  v7 = v6 - 11;
  if ( !v7 )
  {
    v2 = 3LL;
LABEL_10:
    v4 = v2;
    goto LABEL_6;
  }
  if ( v7 == 1 )
  {
    LODWORD(v2) = 0;
    v4 = 0LL;
  }
LABEL_6:
  v8 = (CButton *)*((_QWORD *)this + 92);
  if ( v8 )
  {
    CButton::SetMouseCapture(v8, 0);
    v11 = (CBaseObject *)*((_QWORD *)this + 92);
    if ( v11 )
    {
      CBaseObject::Release(v11);
      *((_QWORD *)this + 92) = 0LL;
    }
  }
  if ( (_DWORD)v2 != 4 )
  {
    v9 = (CMILRefCountBase *)*((_QWORD *)this + v4 + 61);
    if ( v9 )
    {
      *((_QWORD *)this + 92) = v9;
      CMILRefCountBase::AddRef(v9);
      CButton::SetMouseCapture(v10, 1);
    }
  }
}
