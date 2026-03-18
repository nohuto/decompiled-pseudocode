/*
 * XREFs of ?Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z @ 0x1802E645C
 * Callers:
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1802E5800 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z @ 0x1802E5B98 (-CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScanPipeline::Run(CScanPipeline *this, void *a2, const void *a3, int a4, int a5, int a6)
{
  char *v6; // rsi
  __int64 v8; // r8
  char *v11; // rdx
  __int64 *v12; // r9
  __int64 v13; // rcx
  bool v14; // zf
  char *v15; // rdi
  __int64 v16; // rcx
  int v17; // ebx
  void (__fastcall **i)(char *, __int64, __int64, __int64 *); // rdi

  if ( a4 )
  {
    v6 = (char *)this + 520;
    *((_DWORD *)this + 130) = a5;
    v8 = *((unsigned int *)this + 140);
    *((_DWORD *)this + 132) = a4;
    v11 = (char *)this + 8;
    v12 = (__int64 *)*((_QWORD *)this + 67);
    *((_DWORD *)this + 131) = a6;
    if ( (_DWORD)v8 )
    {
      do
      {
        v13 = *v12++;
        *(_QWORD *)(v13 + *(_QWORD *)v11) = a2;
        v14 = (_DWORD)v8 == 1;
        v8 = (unsigned int)(v8 - 1);
      }
      while ( !v14 );
    }
    v15 = v11;
    if ( a3 )
    {
      v8 = *((unsigned int *)this + 154);
      v12 = (__int64 *)*((_QWORD *)this + 74);
      if ( (_DWORD)v8 )
      {
        do
        {
          v16 = *v12++;
          *(_QWORD *)(v16 + *(_QWORD *)v11) = a3;
          v14 = (_DWORD)v8 == 1;
          v8 = (unsigned int)(v8 - 1);
        }
        while ( !v14 );
        v15 = (char *)this + 8;
      }
    }
    v17 = *((_DWORD *)this + 8);
    for ( i = *(void (__fastcall ***)(char *, __int64, __int64, __int64 *))v15; v17; --v17 )
    {
      (*i)(v6, (__int64)(i + 1), v8, v12);
      i += 6;
    }
  }
}
