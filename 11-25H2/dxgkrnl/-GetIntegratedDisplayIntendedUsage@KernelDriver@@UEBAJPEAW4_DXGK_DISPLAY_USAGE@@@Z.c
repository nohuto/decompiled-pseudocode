/*
 * XREFs of ?GetIntegratedDisplayIntendedUsage@KernelDriver@@UEBAJPEAW4_DXGK_DISPLAY_USAGE@@@Z @ 0x140276710
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x140028918 (DpiFdoGetChildDescriptor.c)
 */

__int64 __fastcall KernelDriver::GetIntegratedDisplayIntendedUsage(KernelDriver *this, enum _DXGK_DISPLAY_USAGE *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  _QWORD *ChildDescriptor; // rax
  unsigned int v5; // r9d
  _BYTE *v6; // r10
  __int64 v7; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    ChildDescriptor = DpiFdoGetChildDescriptor(
                        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 216LL) + 64LL),
                        *((_DWORD *)this + 8));
    if ( ChildDescriptor && (v7 = ChildDescriptor[13]) != 0 )
    {
      result = v5;
      LOBYTE(v5) = *(_BYTE *)(v7 + 121);
    }
    else
    {
      result = ChildDescriptor != 0LL ? -1071841279 : -1073741811;
    }
    *v6 = v5;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741632LL);
    result = 3221225664LL;
    WdLogGlobalForLineNumber = 117;
  }
  return result;
}
