/*
 * XREFs of PiDmGetReferencedObjectFromProperty @ 0x140A58968
 * Callers:
 *     PiDmObjectProcessPropertyChange @ 0x1408B7B08 (PiDmObjectProcessPropertyChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _PnpStringFromGuid @ 0x1408B4EBC (_PnpStringFromGuid.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1408B7070 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmGetObject @ 0x1408C95A0 (PiDmGetObject.c)
 *     PnpGetObjectProperty @ 0x1408CA950 (PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDmGetReferencedObjectFromProperty(
        unsigned int a1,
        WCHAR *a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  int CachedObjectReference; // eax
  unsigned int Object; // ebx
  int ObjectProperty; // eax
  PVOID v13; // rdi
  unsigned __int16 *v14; // rdx
  __int64 v15; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+70h] [rbp-98h] BYREF
  wchar_t v18[40]; // [rsp+80h] [rbp-88h] BYREF

  LODWORD(v15) = 0;
  P = 0LL;
  *a7 = 0LL;
  CachedObjectReference = PiDmObjectGetCachedObjectReference(a1, (__int64)a2, a3, a5, a7);
  Object = CachedObjectReference;
  if ( CachedObjectReference >= 0 )
  {
    if ( *(_DWORD *)(*a7 + 28LL) != a6 )
    {
      PiDmObjectRelease((unsigned int *)*a7);
      *a7 = 0LL;
      return (unsigned int)-1073741772;
    }
    return Object;
  }
  if ( CachedObjectReference != -1073741802 )
    return Object;
  ObjectProperty = PnpGetObjectProperty(
                     0x5A706E50u,
                     0x10u,
                     a2,
                     a1,
                     0LL,
                     0LL,
                     a5,
                     (int *)&v15,
                     &P,
                     (unsigned int *)&v17,
                     0);
  v13 = P;
  Object = ObjectProperty;
  if ( ObjectProperty >= 0 )
  {
    if ( (_DWORD)v15 == 13 )
    {
      Object = PnpStringFromGuid((int *)P, v18);
      if ( (Object & 0x80000000) != 0 )
        goto LABEL_14;
      v14 = v18;
    }
    else
    {
      if ( (_DWORD)v15 != 18 )
      {
        Object = -1073741772;
        goto LABEL_14;
      }
      v14 = (unsigned __int16 *)P;
    }
    Object = PiDmGetObject(a6, v14, a7);
  }
LABEL_14:
  if ( v13 )
    ExFreePoolWithTag(v13, 0x5A706E50u);
  return Object;
}
