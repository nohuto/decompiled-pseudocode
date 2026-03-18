/*
 * XREFs of ??0OUTPUTDUPL_MGR@@QEAA@PEAVADAPTER_DISPLAY@@I@Z @ 0x1401DEE64
 * Callers:
 *     ??0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z @ 0x1400762DC (--0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z.c)
 * Callees:
 *     <none>
 */

OUTPUTDUPL_MGR *__fastcall OUTPUTDUPL_MGR::OUTPUTDUPL_MGR(OUTPUTDUPL_MGR *this, struct ADAPTER_DISPLAY *a2, int a3)
{
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 37;
  *((_DWORD *)this + 12) = 50;
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 88) = 0;
  *((_DWORD *)this + 18) = 1;
  *((_DWORD *)this + 19) = a3;
  *((_QWORD *)this + 8) = (char *)this + 56;
  *((_QWORD *)this + 7) = (char *)this + 56;
  return this;
}
