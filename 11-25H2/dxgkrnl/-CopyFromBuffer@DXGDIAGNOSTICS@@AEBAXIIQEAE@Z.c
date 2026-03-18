/*
 * XREFs of ?CopyFromBuffer@DXGDIAGNOSTICS@@AEBAXIIQEAE@Z @ 0x1400246F4
 * Callers:
 *     ?ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z @ 0x140024510 (-ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z.c)
 * Callees:
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

void __fastcall DXGDIAGNOSTICS::CopyFromBuffer(
        DXGDIAGNOSTICS *this,
        unsigned int a2,
        size_t a3,
        unsigned __int8 *const a4)
{
  __int64 v4; // rdi
  unsigned int v6; // edx
  __int64 v8; // rcx
  int v9; // ebp
  const void *v10; // rdx
  unsigned __int8 *v11; // rcx
  int v12; // eax

  v4 = a2;
  v6 = *((_DWORD *)this + 4);
  v8 = *((_QWORD *)this + 7);
  v9 = v4 + a3;
  if ( (int)v4 + (int)a3 > v6 )
  {
    memmove(a4, (const void *)(v4 + v8), v6 - (unsigned int)v4);
    v12 = *((_DWORD *)this + 4);
    v10 = (const void *)*((_QWORD *)this + 7);
    v11 = &a4[(unsigned int)(v12 - v4)];
    a3 = (unsigned int)(v9 - v12);
  }
  else
  {
    v10 = (const void *)(v4 + v8);
    a3 = (unsigned int)a3;
    v11 = a4;
  }
  memmove(v11, v10, a3);
}
