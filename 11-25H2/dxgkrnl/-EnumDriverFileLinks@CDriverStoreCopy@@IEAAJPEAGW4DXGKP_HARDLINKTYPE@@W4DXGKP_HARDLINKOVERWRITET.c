/*
 * XREFs of ?EnumDriverFileLinks@CDriverStoreCopy@@IEAAJPEAGW4DXGKP_HARDLINKTYPE@@W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1401C8830
 * Callers:
 *     ?EnumSingleRegistry@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@PEAGW4DXGKP_HARDLINKTYPE@@W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1401C8BE4 (-EnumSingleRegistry@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@PEAGW4DXGKP_HARDLINKTYPE@@W4DXGK.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall CDriverStoreCopy::EnumDriverFileLinks(__int64 a1, const WCHAR *a2, int a3, int a4)
{
  NTSTATUS v5; // ebx
  __int64 v6; // r9
  ULONG v7; // r13d
  _DWORD *v8; // rsi
  ULONG i; // r12d
  __int64 v10; // r9
  int v11; // eax
  _WORD *v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // rdi
  __int16 *v15; // r15
  unsigned int v16; // ecx
  __int16 *v17; // rax
  __int16 *v18; // rdx
  __int16 v19; // cx
  __int64 *v20; // rax
  __int64 v21; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-79h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-71h] BYREF
  int v24; // [rsp+40h] [rbp-69h]
  int v25; // [rsp+44h] [rbp-65h]
  __int64 v26; // [rsp+48h] [rbp-61h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-59h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-49h] BYREF
  _OWORD KeyInformation[2]; // [rsp+90h] [rbp-19h] BYREF
  __int128 v30; // [rsp+B0h] [rbp+7h]

  v26 = a1;
  v25 = a4;
  DestinationString = 0LL;
  v24 = a3;
  RtlInitUnicodeString(&DestinationString, a2);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  ResultLength = 0;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v30 = 0LL;
  v5 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( v5 >= 0 && (_DWORD)v30 )
  {
    v7 = DWORD2(v30) + 26 + DWORD1(v30);
    v8 = (_DWORD *)operator new[](v7, 0x4B677844u, 256LL, v6);
    if ( v8 )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= (unsigned int)v30 )
        {
LABEL_35:
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
          goto LABEL_37;
        }
        v5 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, v8, v7, &ResultLength);
        if ( v5 < 0 )
          continue;
        v11 = v8[1];
        if ( v11 != 7 && v11 != 1 )
          continue;
        v12 = (_WORD *)((char *)v8 + (unsigned int)v8[2]);
        if ( *v12 == 46 || *v12 == 92 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 1551;
          v5 = -1073741811;
        }
        v13 = operator new[]((unsigned int)v8[3] + 42LL, 0x4B677844u, 256LL, v10);
        v14 = (_QWORD *)v13;
        if ( !v13 )
        {
          v5 = -1073741801;
          goto LABEL_35;
        }
        v15 = (__int16 *)(v13 + 36);
        v16 = v8[3] + 2;
        *(_DWORD *)(v13 + 32) = v16;
        memmove((void *)(v13 + 36), v12, v16);
        v17 = v15;
        v18 = (__int16 *)v14 + ((unsigned __int64)(unsigned int)v8[3] >> 1) + 18;
        *v18 = 0;
        if ( v15 == v18 )
          goto LABEL_27;
        while ( 1 )
        {
          v19 = *v17++;
          if ( v19 != 92 )
            break;
          v15 = v17;
LABEL_26:
          if ( v17 == v18 )
            goto LABEL_27;
        }
        if ( v19 )
          goto LABEL_26;
        while ( v17 != v18 )
        {
          if ( *v17 != 32 )
          {
            if ( *v17 )
              v15 = v17++;
            goto LABEL_26;
          }
          ++v17;
        }
LABEL_27:
        if ( !*v15 || *v15 == 46 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 1605;
          v5 = -1073741811;
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
          goto LABEL_35;
        }
        *((_DWORD *)v14 + 4) = v24;
        *((_DWORD *)v14 + 5) = v25;
        v20 = (__int64 *)(v26 + 1608);
        v14[3] = v15;
        v21 = *v20;
        if ( *(__int64 **)(*v20 + 8) != v20 )
          __fastfail(3u);
        *v14 = v21;
        v14[1] = v20;
        *(_QWORD *)(v21 + 8) = v14;
        *v20 = (__int64)v14;
      }
    }
    v5 = -1073741801;
  }
LABEL_37:
  ZwClose(KeyHandle);
  return (unsigned int)v5;
}
