/*
 * XREFs of NtRIMDeviceIoControl @ 0x14017ACF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     RIMDeviceIoControl @ 0x14017AF70 (RIMDeviceIoControl.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall NtRIMDeviceIoControl(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char *a4,
        unsigned int Size,
        char *Src,
        unsigned int a7,
        _DWORD *a8,
        int a9)
{
  int v10; // ebx
  void *v11; // rsi
  void *v12; // rdi
  ULONG64 v13; // rcx
  _DWORD **v14; // r14
  _DWORD *v15; // rcx
  int v17; // [rsp+60h] [rbp-48h] BYREF
  void *v18; // [rsp+68h] [rbp-40h]
  void *v19; // [rsp+70h] [rbp-38h]

  v10 = 0;
  v11 = 0LL;
  v18 = 0LL;
  v12 = 0LL;
  v19 = 0LL;
  v17 = 0;
  if ( Size )
  {
    v11 = (void *)Win32AllocPoolZInitImpl(256LL, Size, 0x706D7452u);
    v18 = v11;
    if ( v11 )
    {
      if ( &a4[Size] < a4 || (unsigned __int64)&a4[Size] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      RtlCopyVolatileMemory(v11, a4, Size);
    }
    else
    {
      v10 = -1073741801;
    }
  }
  if ( v10 >= 0 )
  {
    if ( a7 )
    {
      v12 = (void *)Win32AllocPoolZInitImpl(256LL, a7, 0x706D7452u);
      v19 = v12;
      if ( v12 )
      {
        if ( &Src[a7] < Src || (unsigned __int64)&Src[a7] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        RtlCopyVolatileMemory(v12, Src, a7);
      }
      else
      {
        v10 = -1073741801;
      }
    }
    if ( v10 >= 0 )
    {
      v10 = RIMDeviceIoControl(a1, a2, a3, v11, Size, v12, a7, &v17, 0LL, 0, a9, 0);
      if ( v10 >= 0 )
      {
        if ( v12 )
        {
          v13 = (ULONG64)&Src[a7];
          v14 = (_DWORD **)MmUserProbeAddress;
          if ( v13 > MmUserProbeAddress || v13 <= (unsigned __int64)Src )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
            v14 = (_DWORD **)MmUserProbeAddress;
          }
          memmove(Src, v12, a7);
        }
        else
        {
          v14 = (_DWORD **)MmUserProbeAddress;
        }
        v15 = a8;
        if ( a8 )
        {
          if ( a8 >= *v14 )
            v15 = *v14;
          *v15 = v17;
        }
      }
    }
  }
  if ( v11 )
    GreDeleteFastMutex((char *)v11);
  if ( v12 )
    GreDeleteFastMutex((char *)v12);
  return (unsigned int)v10;
}
