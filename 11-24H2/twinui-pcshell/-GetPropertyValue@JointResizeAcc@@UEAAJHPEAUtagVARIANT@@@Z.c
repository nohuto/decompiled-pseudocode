/*
 * XREFs of ?GetPropertyValue@JointResizeAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x18053CCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x1804D32A0 (-InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z.c)
 */

__int64 __fastcall JointResizeAcc::GetPropertyValue(JointResizeAcc *this, int a2, struct tagVARIANT *a3)
{
  int v6; // ebx
  const unsigned __int16 *v8; // rcx
  int inited; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  VariantInit(a3);
  v6 = a2 - 30011;
  if ( v6 )
  {
    if ( (unsigned int)(v6 - 126) <= 1 )
    {
      a3->iVal = -1;
      a3->vt = 11;
    }
    return 0LL;
  }
  v8 = &pvData;
  if ( *((_QWORD *)this + 9) )
    v8 = (const unsigned __int16 *)*((_QWORD *)this + 9);
  inited = InitVariantFromString(v8, a3);
  v10 = inited;
  if ( inited >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAA,
    (int)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
    (const char *)(unsigned int)inited);
  return v10;
}
