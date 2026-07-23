/*
 * XREFs of BiConvertElementToRegistryData @ 0x1409A6714
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x1409A517C (BcdSetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlStringFromGUIDEx @ 0x1409A3470 (RtlStringFromGUIDEx.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140A94D38 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x140ABBBD4 (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiConvertElementToRegistryData(
        unsigned int a1,
        _BYTE *a2,
        unsigned int a3,
        __int64 a4,
        wchar_t **a5,
        unsigned int *a6)
{
  size_t v7; // r14
  int v8; // ecx
  int v9; // ecx
  char v10; // r12
  _WORD *v11; // rcx
  unsigned int i; // eax
  unsigned int v13; // r15d
  wchar_t *Pool2; // rax
  wchar_t *Buffer; // rsi
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  NTSTATUS v20; // edi
  unsigned int v22; // r14d
  int v23; // r15d
  int v24; // ebx
  wchar_t *v25; // rax
  _WORD *v26; // rcx
  unsigned int v27; // eax
  size_t v28; // rbx
  int v29; // eax
  unsigned int *v30; // rbx
  wchar_t *v31; // rax
  wchar_t *v32; // rax
  void *Src; // [rsp+20h] [rbp-20h] BYREF
  void *v34; // [rsp+28h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v36; // [rsp+88h] [rbp+48h]

  v7 = a3;
  Src = 0LL;
  DestinationString = 0LL;
  v8 = (HIBYTE(a1) & 0xF) - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      v10 = 1;
      if ( (a3 & 1) == 0 )
      {
        v11 = a2;
        for ( i = a3 >> 1; i; --i )
        {
          if ( !*v11 )
          {
            v13 = a3;
            goto LABEL_9;
          }
          ++v11;
        }
        v13 = a3 + 2;
        if ( a3 + 2 < a3 )
          return (unsigned int)-1073741675;
        v10 = 0;
LABEL_9:
        Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL, v13, 0x4B444342u);
        Buffer = Pool2;
        if ( !Pool2 )
          goto LABEL_56;
        memmove(Pool2, a2, v7);
        if ( !v10 )
          *(wchar_t *)((char *)Buffer + v13 - 2) = 0;
        goto LABEL_19;
      }
      return (unsigned int)-1073741788;
    }
    v16 = v9 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 && (a3 & 7) != 0 )
              return (unsigned int)-1073741788;
            v13 = a3;
            v32 = (wchar_t *)ExAllocatePool2(0x102uLL, a3, 0x4B444342u);
            Buffer = v32;
            if ( v32 )
            {
              memmove(v32, a2, v7);
              goto LABEL_19;
            }
          }
          else
          {
            if ( a3 - 1 > 1 )
              return (unsigned int)-1073741788;
            v13 = 1;
            Buffer = (wchar_t *)ExAllocatePool2(0x102uLL, 1uLL, 0x4B444342u);
            if ( Buffer )
            {
              *(_BYTE *)Buffer = *a2 != 0;
LABEL_19:
              v20 = 0;
              *a5 = Buffer;
              *a6 = v13;
              goto LABEL_20;
            }
          }
        }
        else
        {
          v13 = 8;
          if ( a3 != 8 )
            return (unsigned int)-1073741788;
          Buffer = (wchar_t *)ExAllocatePool2(0x102uLL, 8uLL, 0x4B444342u);
          if ( Buffer )
          {
            *(_QWORD *)Buffer = *(_QWORD *)a2;
            goto LABEL_19;
          }
        }
      }
      else
      {
        if ( (a3 & 0xF) != 0 )
          return (unsigned int)-1073741788;
        v22 = a3 >> 4;
        v23 = 0;
        v24 = 0;
        if ( a3 >> 4 )
        {
          do
          {
            RtlInitUnicodeString(&DestinationString, 0LL);
            v20 = RtlStringFromGUIDEx((PGUID)&a2[16 * v24], &DestinationString, 1u);
            if ( v20 < 0 )
              goto LABEL_20;
            v23 += DestinationString.Length + 2;
            if ( DestinationString.Buffer )
            {
              ExFreePool(DestinationString.Buffer);
              DestinationString = 0LL;
            }
          }
          while ( ++v24 < v22 );
        }
        v13 = v23 + 2;
        v25 = (wchar_t *)ExAllocatePool2(0x102uLL, v13, 0x4B444342u);
        Buffer = v25;
        if ( v25 )
        {
          v34 = v25;
          v36 = 0;
          v26 = v25;
          v27 = 0;
          if ( v22 )
          {
            while ( 1 )
            {
              v20 = RtlStringFromGUIDEx((PGUID)&a2[16 * v27], &DestinationString, 1u);
              if ( v20 < 0 )
                break;
              v28 = (unsigned int)DestinationString.Length + 2;
              memmove(v34, DestinationString.Buffer, v28);
              v26 = (char *)v34 + v28;
              v34 = (char *)v34 + v28;
              if ( DestinationString.Buffer )
              {
                ExFreePool(DestinationString.Buffer);
                v26 = v34;
                DestinationString = 0LL;
              }
              v27 = v36 + 1;
              v36 = v27;
              if ( v27 >= v22 )
                goto LABEL_35;
            }
            ExFreePoolWithTag(Buffer, 0x4B444342u);
            goto LABEL_20;
          }
LABEL_35:
          *v26 = 0;
          goto LABEL_19;
        }
      }
      goto LABEL_56;
    }
    if ( a3 != 16 )
      return (unsigned int)-1073741788;
    v20 = RtlStringFromGUIDEx((PGUID)a2, &DestinationString, 1u);
    if ( v20 >= 0 )
    {
      Buffer = DestinationString.Buffer;
      v13 = DestinationString.Length + 2;
      goto LABEL_19;
    }
  }
  else
  {
    if ( *(_DWORD *)a2 == 6 )
      v29 = BiConvertQualifiedPartitionToBootEnvironment(a2, a3, &Src);
    else
      v29 = BiConvertNtDeviceToBootEnvironment(a2, a3, 0LL, &Src);
    v20 = v29;
    if ( v29 < 0 )
      goto LABEL_20;
    v30 = (unsigned int *)Src;
    v13 = *((_DWORD *)Src + 2) + 16;
    if ( *((_DWORD *)Src + 2) < 0xFFFFFFF0 )
    {
      v31 = (wchar_t *)ExAllocatePool2(0x102uLL, (unsigned int)(*((_DWORD *)Src + 2) + 16), 0x4B444342u);
      Buffer = v31;
      if ( v31 )
      {
        *(_OWORD *)v31 = *(_OWORD *)(a2 + 4);
        memmove(v31 + 8, v30, v30[2]);
        if ( Src )
        {
          ExFreePoolWithTag(Src, 0x4B444342u);
          Src = 0LL;
        }
        goto LABEL_19;
      }
LABEL_56:
      v20 = -1073741801;
      goto LABEL_20;
    }
    v20 = -1073741811;
  }
LABEL_20:
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
  return (unsigned int)v20;
}
