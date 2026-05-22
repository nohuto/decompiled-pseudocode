/*
 * XREFs of ?Attach@AlpcSection@@CAJPEBVAlpcPort@@PEAX_K12AEAVSipcSectionId@@PEAPEAV1@@Z @ 0x18010B744
 * Callers:
 *     ?AttachOrUnmap@AlpcSection@@SAJPEBVAlpcPort@@PEAX_K12PEAPEAV1@@Z @ 0x18010B968 (-AttachOrUnmap@AlpcSection@@SAJPEBVAlpcPort@@PEAX_K12PEAPEAV1@@Z.c)
 * Callees:
 *     ?ProtectExtraMemory@SipcSection@@IEBAXXZ @ 0x180085A34 (-ProtectExtraMemory@SipcSection@@IEBAXXZ.c)
 *     ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180094CA0 (-Reset@SipcWin32Handle@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E558 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IsInitialized@SipcSectionId@@QEBA_NXZ @ 0x18010D8D8 (-IsInitialized@SipcSectionId@@QEBA_NXZ.c)
 */

__int64 __fastcall AlpcSection::Attach(
        const struct AlpcPort *a1,
        char *a2,
        unsigned __int64 a3,
        void *a4,
        unsigned __int64 a5,
        struct SipcSectionId *a6,
        struct AlpcSection **TargetHandle)
{
  struct AlpcSection **v7; // r14
  char *v12; // rdi
  unsigned __int64 v13; // r8
  HANDLE CurrentProcess; // rbx
  HANDLE v15; // rax
  signed int LastError; // eax
  unsigned int v17; // ebx
  char *v18; // rax
  SipcSection *v19; // r8
  struct AlpcSection **v20; // rdx
  __int128 v21; // xmm1

  v7 = TargetHandle;
  *TargetHandle = 0LL;
  if ( !a2 )
    return 2147942487LL;
  if ( ((unsigned __int16)a2 & 0xFFF) != 0 )
    return 2147942487LL;
  if ( a3 < 0x28 )
    return 2147942487LL;
  v12 = &a2[(a3 - 40) & 0xFFFFFFFFFFFFFFF8uLL];
  *(_OWORD *)a6 = *(_OWORD *)(v12 + 8);
  *((_OWORD *)a6 + 1) = *(_OWORD *)(v12 + 24);
  if ( !SipcSectionId::IsInitialized(a6) || v13 < ((*(_QWORD *)v12 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 40 )
    return 2147942487LL;
  TargetHandle = 0LL;
  CurrentProcess = GetCurrentProcess();
  v15 = GetCurrentProcess();
  if ( DuplicateHandle(v15, a4, CurrentProcess, (LPHANDLE)&TargetHandle, 0, 0, 2u) )
  {
    v18 = (char *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
    v19 = (SipcSection *)v18;
    if ( v18 )
    {
      v20 = TargetHandle;
      *(_QWORD *)v18 = &SipcSection::`vftable';
      *((_QWORD *)v18 + 3) = a1;
      *((_QWORD *)v18 + 4) = a2;
      *((_QWORD *)v18 + 5) = a3;
      *((_QWORD *)v18 + 6) = *(_QWORD *)v12;
      *(_OWORD *)(v18 + 56) = *(_OWORD *)(v12 + 8);
      v21 = *(_OWORD *)(v12 + 24);
      *(_QWORD *)v18 = &AlpcSection::`vftable';
      *(_OWORD *)(v18 + 72) = v21;
      *((_DWORD *)v18 + 22) = 1;
      *((_QWORD *)v18 + 12) = v20;
      *((_QWORD *)v18 + 13) = 0LL;
      *((_QWORD *)v18 + 14) = a5;
    }
    else
    {
      v19 = 0LL;
    }
    *v7 = v19;
    if ( v19 )
    {
      TargetHandle = 0LL;
      SipcSection::ProtectExtraMemory(v19);
      v17 = 0;
    }
    else
    {
      v17 = -2147024882;
    }
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v17 = -2147418113;
    if ( LastError < 0 )
      v17 = LastError;
  }
  SipcWin32Handle::Reset((void **)&TargetHandle);
  return v17;
}
