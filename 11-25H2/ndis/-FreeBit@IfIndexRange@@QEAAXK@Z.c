/*
 * XREFs of ?FreeBit@IfIndexRange@@QEAAXK@Z @ 0x14000B190
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x140004BD0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140007EC0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x14000B1E0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall IfIndexRange::FreeBit(IfIndexRange *this, int a2)
{
  unsigned int v2; // edx
  _RTL_BITMAP_EX *v3; // rdi
  unsigned int v4; // ebx

  v2 = a2 - *(_DWORD *)this;
  v3 = (_RTL_BITMAP_EX *)((char *)this + 8);
  v4 = v2;
  if ( (unsigned __int64)v2 < *((_QWORD *)this + 1) )
  {
    if ( RtlTestBitEx((PRTL_BITMAP_EX)((char *)this + 8), v2) )
      RtlClearBitEx(v3, v4);
  }
}
