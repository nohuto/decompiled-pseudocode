/*
 * XREFs of RtlConvertDeviceFamilyInfoToString @ 0x180039C60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180039D50 (RtlpGetDeviceFamilyInfoEnum.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

DWORD __cdecl RtlConvertDeviceFamilyInfoToString(
        PDWORD pulDeviceFamilyBufferSize,
        PDWORD pulDeviceFormBufferSize,
        PWSTR DeviceFamily,
        PWSTR DeviceForm)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  wchar_t *v11; // rdx
  __int64 v12; // rax
  wchar_t *v13; // rbp
  DWORD v14; // eax
  DWORD v15; // ebx
  char v16; // cl
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF

  v18 = 0;
  v19 = 0;
  RtlpGetDeviceFamilyInfoEnum(0LL, &v18, &v19);
  v8 = v18;
  v9 = v19;
  if ( v18 > 0x11 )
    v8 = 0LL;
  if ( v19 > 0x2F )
    v9 = 0LL;
  v10 = -1LL;
  v11 = (&off_180176780)[v8];
  v12 = -1LL;
  v13 = (&off_180176810)[v9];
  do
    ++v12;
  while ( v11[v12] );
  v14 = 2 * v12 + 2;
  do
    ++v10;
  while ( v13[v10] );
  v15 = 2 * v10 + 2;
  if ( v14 > *pulDeviceFamilyBufferSize || (v16 = 0, v15 > *pulDeviceFormBufferSize) )
    v16 = 1;
  *pulDeviceFamilyBufferSize = v14;
  *pulDeviceFormBufferSize = v15;
  if ( v16 )
    return -1073741789;
  memmove(DeviceFamily, v11, v14);
  memmove(DeviceForm, v13, v15);
  return 0;
}
