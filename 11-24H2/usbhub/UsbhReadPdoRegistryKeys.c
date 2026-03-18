/*
 * XREFs of UsbhReadPdoRegistryKeys @ 0x1400521B4
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x14001D150 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     UsbhGetPdoRegistryParameter @ 0x140035BF0 (UsbhGetPdoRegistryParameter.c)
 *     UsbhGetD3Policy @ 0x1400518A4 (UsbhGetD3Policy.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhReadPdoRegistryKeys(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  wchar_t **v2; // rbx
  int v4; // eax
  int v5; // eax
  unsigned int i; // r14d
  void *Pool2; // rax
  void *v8; // rsi
  ULONG v10; // [rsp+30h] [rbp-10h]
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF
  int v12; // [rsp+80h] [rbp+40h] BYREF
  int v13; // [rsp+88h] [rbp+48h] BYREF

  v11 = a1;
  v13 = 0;
  v2 = &PdoKeyValues;
  if ( PdoKeyValues )
  {
    do
    {
      v4 = *((_DWORD *)v2 + 2);
      LODWORD(v11) = 0;
      v12 = v4;
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 3 )
        {
          LOBYTE(v10) = *((_BYTE *)v2 + 12);
          if ( (int)UsbhGetPdoRegistryParameter(a2, *v2, &v13, 4u, &v12, &v11, v10) >= 0
            && (_DWORD)v11 == 4
            && v12 == 4
            && v13 )
          {
            ((void (__fastcall *)(struct _DEVICE_OBJECT *, wchar_t *, int *, __int64))v2[3])(a2, *v2, &v13, 4LL);
          }
        }
      }
      else
      {
        for ( i = 8; ; i = v11 )
        {
          Pool2 = (void *)ExAllocatePool2(64LL, i, 1112885333LL);
          v8 = Pool2;
          if ( !Pool2 )
            break;
          LOBYTE(v10) = *((_BYTE *)v2 + 12);
          if ( (UsbhGetPdoRegistryParameter(a2, *v2, Pool2, i, &v12, &v11, v10) & 0xC0000000) == 0xC0000000
            || v12 != 1
            || !(_DWORD)v11 )
          {
            goto LABEL_17;
          }
          if ( (unsigned int)v11 <= i )
          {
            ((void (__fastcall *)(struct _DEVICE_OBJECT *, wchar_t *, void *, _QWORD))v2[3])(
              a2,
              *v2,
              v8,
              (unsigned int)v11);
LABEL_17:
            ExFreePoolWithTag(v8, 0);
            break;
          }
          ExFreePoolWithTag(v8, 0);
        }
      }
      v2 += 4;
    }
    while ( *v2 );
  }
  UsbhGetD3Policy(a2);
  return 0LL;
}
