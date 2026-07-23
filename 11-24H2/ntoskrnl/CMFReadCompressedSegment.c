/*
 * XREFs of CMFReadCompressedSegment @ 0x1407C3520
 * Callers:
 *     CMFSystemThreadRoutine @ 0x1407C3A10 (CMFSystemThreadRoutine.c)
 * Callees:
 *     XpressDecode @ 0x1406A2C40 (XpressDecode.c)
 *     XpressDecodeClose @ 0x1406A2D64 (XpressDecodeClose.c)
 *     XpressDecodeCreate @ 0x1406A2D90 (XpressDecodeCreate.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1406A78B0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1406A78F0 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1406A7CF0 (ZwCreateSection.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall CMFReadCompressedSegment(HANDLE FileHandle, char *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v8; // r14
  NTSTATUS v9; // ebx
  int v10; // ebx
  unsigned int v11; // r8d
  unsigned int v12; // ebx
  char *v13; // r10
  char *v14; // rcx
  unsigned int v15; // r13d
  unsigned int v16; // r12d
  unsigned int v17; // eax
  unsigned int v18; // r11d
  unsigned int v19; // r9d
  unsigned int v20; // edi
  __int64 v21; // r15
  PVOID BaseAddress; // [rsp+58h] [rbp-29h] BYREF
  char *v24; // [rsp+60h] [rbp-21h]
  HANDLE SectionHandle; // [rsp+68h] [rbp-19h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-11h] BYREF
  char *v27; // [rsp+78h] [rbp-9h]
  LARGE_INTEGER SectionOffset; // [rsp+80h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp+7h] BYREF
  unsigned int v30; // [rsp+E8h] [rbp+67h]

  SectionOffset.QuadPart = 0LL;
  SectionHandle = 0LL;
  ViewSize = 0LL;
  BaseAddress = 0LL;
  v8 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( !FileHandle || !a4 || !a2 )
  {
    v9 = -1073741811;
    goto LABEL_31;
  }
  if ( a4[21] > 0x400u )
    return (unsigned int)-1073741811;
  v8 = XpressDecodeCreate();
  if ( !v8 )
  {
    v9 = -1073741801;
    goto LABEL_31;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
  if ( v9 < 0 )
  {
LABEL_31:
    if ( BaseAddress )
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    goto LABEL_33;
  }
  v9 = ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         &SectionOffset,
         &ViewSize,
         ViewUnmap,
         0x400000u,
         2u);
  if ( v9 >= 0 )
  {
    v10 = ViewSize;
    if ( ViewSize < 0x1060 || a3 < 0x1060 )
    {
LABEL_12:
      v9 = -1073741306;
    }
    else
    {
      memmove(a2, a4, 0x1060uLL);
      v11 = v10 - 4192;
      v12 = a4[20];
      v13 = a2 + 4192;
      v14 = (char *)BaseAddress + 4192;
      v15 = 0;
      v16 = a3 - 4192;
      while ( 1 )
      {
        v17 = a4[21];
        v18 = v12;
        v27 = v13;
        v19 = v12;
        v24 = v14;
        v30 = v11;
        if ( v15 >= v17 )
          break;
        if ( v15 == v17 - 1 )
        {
          v20 = a4[22];
        }
        else
        {
          v14 = v24;
          v20 = a4[v15 + 24] - a4[v15 + 23];
        }
        if ( v20 > v11 || !v16 )
          goto LABEL_12;
        v12 = v16;
        if ( v19 <= v16 )
          v12 = v18;
        if ( v20 == v12 )
        {
          v21 = v12;
          memmove(v13, v14, v12);
        }
        else
        {
          if ( (unsigned int)XpressDecode(v8, (__int64)v13, v12, v12, (__int64)v14, v20) != v12 )
          {
            v9 = -1073741217;
            goto LABEL_31;
          }
          v21 = v12;
        }
        v16 -= v12;
        ++v15;
        v11 = v30 - v20;
        v13 = &v27[v21];
        v14 = &v24[v20];
      }
      v9 = 0;
    }
    goto LABEL_31;
  }
  BaseAddress = 0LL;
LABEL_33:
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( v8 )
    XpressDecodeClose(v8);
  return (unsigned int)v9;
}
