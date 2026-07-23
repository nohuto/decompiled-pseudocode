/*
 * XREFs of IoCheckFunctionAccess @ 0x1409E5640
 * Callers:
 *     <none>
 * Callees:
 *     SeQuerySecurityAccessMask @ 0x1409E57E8 (SeQuerySecurityAccessMask.c)
 *     SeSetSecurityAccessMask @ 0x140A12CE8 (SeSetSecurityAccessMask.c)
 */

NTSTATUS __stdcall IoCheckFunctionAccess(
        ACCESS_MASK GrantedAccess,
        UCHAR MajorFunction,
        UCHAR MinorFunction,
        ULONG IoControlCode,
        PVOID Arg1,
        PVOID Arg2)
{
  NTSTATUS v6; // r8d
  int v7; // eax
  char v8; // r10
  int v9; // r8d
  int v11; // r9d
  bool v12; // cf
  int v13; // r10d
  char v14; // r10
  int v15; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v15 = 0;
  if ( MajorFunction > 0xAu )
  {
    switch ( MajorFunction )
    {
      case 0xBu:
        if ( (~GrantedAccess & IopSetFsOperationAccess[*(int *)Arg2]) != 0 )
          return -1073741790;
        return v6;
      case 0xCu:
        goto LABEL_37;
      case 0xDu:
      case 0xEu:
      case 0xFu:
        v11 = (unsigned __int16)IoControlCode >> 14;
        if ( v11 && (v11 & GrantedAccess) == 0 )
          return -1073741790;
        return v6;
      case 0x11u:
        v8 = GrantedAccess & 3;
LABEL_20:
        v9 = -(v8 == 0);
        return v9 & 0xC0000022;
      case 0x14u:
        SeQuerySecurityAccessMask(*(unsigned int *)Arg1, &v15, 0LL, (_WORD)IoControlCode);
        break;
      case 0x15u:
        SeSetSecurityAccessMask(*(unsigned int *)Arg1, &v15);
        break;
      default:
        return -1073741808;
    }
    v12 = (v15 & ~v13) != 0;
LABEL_29:
    v9 = -v12;
    return v9 & 0xC0000022;
  }
  switch ( MajorFunction )
  {
    case 0xAu:
      v12 = (~GrantedAccess & IopQueryFsOperationAccess[*(int *)Arg2]) != 0;
      goto LABEL_29;
    case 0u:
    case 2u:
      return v6;
    case 3u:
LABEL_37:
      v14 = (GrantedAccess & 1) == 0;
      goto LABEL_45;
    case 4u:
      v8 = GrantedAccess & 6;
      goto LABEL_20;
    case 5u:
      v7 = IopQueryOperationAccess[*(int *)Arg1];
      goto LABEL_10;
  }
  if ( MajorFunction != 6 )
  {
    switch ( MajorFunction )
    {
      case 7u:
        v14 = ~(_BYTE)GrantedAccess & 8;
        goto LABEL_45;
      case 8u:
        v14 = ~(_BYTE)GrantedAccess & 0x10;
        goto LABEL_45;
      case 9u:
        v14 = ~(_BYTE)GrantedAccess & 2;
LABEL_45:
        v12 = v14 != 0;
        goto LABEL_29;
    }
    return -1073741808;
  }
  v7 = IopSetOperationAccess[*(int *)Arg1];
LABEL_10:
  if ( v7 && (~GrantedAccess & v7) != 0 )
    return -1073741790;
  return v6;
}
