/*
 * XREFs of ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x140073BE8
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1400701D4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxInsertMenuItem @ 0x140071A30 (xxxInsertMenuItem.c)
 * Callees:
 *     DesktopAlloc @ 0x140072EC0 (DesktopAlloc.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall MNAllocMenuItems(__int64 **a1, unsigned __int8 a2)
{
  int v3; // r14d
  unsigned int v4; // esi
  _QWORD *v5; // rbp
  __int64 v6; // r9
  char *v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // r8
  signed int v12; // ecx
  __int64 v13; // rbx

  v3 = 16 * (a2 ^ 1) - 8;
  v4 = 0;
  v5 = (_QWORD *)Win32AllocPoolZInit(96LL * (unsigned int)(v3 + *(_DWORD *)(**a1 + 60)), 1953066325LL);
  if ( !v5 )
    return 0LL;
  v7 = (char *)DesktopAlloc(*(_QWORD *)(**a1 + 24), (unsigned int)(112 * (v3 + *(_DWORD *)(**a1 + 60))), 7LL, v6);
  if ( !v7 )
  {
    Win32FreePool(v5);
    return 0LL;
  }
  if ( *(_QWORD *)(**a1 + 88) )
  {
    v12 = *(_DWORD *)(**a1 + 60);
    if ( v3 + v12 < (unsigned int)v12 )
      v12 += v3;
    v13 = v12;
    memmove(v5, *(const void **)(**a1 + 88), 96LL * v12);
    memmove(v7, *(const void **)(**a1 + 96), 112 * v13);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)(**a1 + 24) + 136LL), 0, *(PVOID *)(**a1 + 96));
    Win32FreePool(*(void **)(**a1 + 88));
  }
  if ( v3 + *(_DWORD *)(**a1 + 60) )
  {
    do
    {
      v8 = v4++;
      v9 = 12 * v8;
      v5[v9] = &v7[112 * v8];
      v5[v9 + 1] = v5[v9] - *(_QWORD *)(*(_QWORD *)(**a1 + 24) + 16LL);
    }
    while ( v4 < v3 + *(_DWORD *)(**a1 + 60) );
  }
  result = 1LL;
  *(_DWORD *)(**a1 + 60) += v3;
  v11 = **a1;
  *(_QWORD *)(*(_QWORD *)(v11 + 40) + 32LL) = v5[1];
  *(_QWORD *)(v11 + 88) = v5;
  *(_QWORD *)(**a1 + 96) = **(_QWORD **)(**a1 + 88);
  return result;
}
