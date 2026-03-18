/*
 * XREFs of ?GetGroup@CSyncLockGroup@@SAPEAV1@I@Z @ 0x18024EF44
 * Callers:
 *     ?EnsureDXGIOutput@CDDisplayRenderTarget@@IEAAJXZ @ 0x180189B18 (-EnsureDXGIOutput@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x180189F74 (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ @ 0x18018A1F4 (-CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@QEAA@XZ @ 0x180247B54 (--1-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std@@@std@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18026717C (--$_Emplace_reallocate@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std@@@.c)
 */

struct CSyncLockGroup *__fastcall CSyncLockGroup::GetGroup(int a1)
{
  __int64 i; // rdx
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  char *v5; // rax
  _QWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  for ( i = CSyncLockGroup::g_syncLockGroups;
        i != (_QWORD)xmmword_1803FA8E0 && *(_DWORD *)(*(_QWORD *)i + 8LL) != a1;
        i += 8LL )
  {
    ;
  }
  if ( i == (_QWORD)xmmword_1803FA8E0 )
  {
    v3 = operator new(0x38uLL);
    v4 = v3;
    if ( a1 == -1 )
    {
      if ( v3 )
      {
        *((_DWORD *)v3 + 2) = -1;
        v5 = (char *)(v3 + 5);
        v4[2] = v5;
        v4[3] = v5;
        v4[4] = v4 + 7;
        *v4 = &CParallelModeGroup::`vftable';
      }
      else
      {
        v4 = 0LL;
      }
      v7 = v4;
      if ( (_QWORD)xmmword_1803FA8E0 != *((_QWORD *)&xmmword_1803FA8E0 + 1) )
      {
        v7 = 0LL;
        *(_QWORD *)xmmword_1803FA8E0 = v4;
        *(_QWORD *)&xmmword_1803FA8E0 = xmmword_1803FA8E0 + 8;
LABEL_19:
        std::unique_ptr<CSyncLockGroup>::~unique_ptr<CSyncLockGroup>(&v7);
        return *(struct CSyncLockGroup **)(xmmword_1803FA8E0 - 8);
      }
    }
    else
    {
      if ( v3 )
      {
        *((_DWORD *)v3 + 2) = a1;
        *v3 = &CSyncLockGroup::`vftable';
        v3[2] = v3 + 5;
        v3[3] = v3 + 5;
        v3[4] = v3 + 7;
      }
      else
      {
        v4 = 0LL;
      }
      v7 = v4;
      if ( (_QWORD)xmmword_1803FA8E0 != *((_QWORD *)&xmmword_1803FA8E0 + 1) )
      {
        v7 = 0LL;
        *(_QWORD *)xmmword_1803FA8E0 = v4;
        *(_QWORD *)&xmmword_1803FA8E0 = xmmword_1803FA8E0 + 8;
        goto LABEL_19;
      }
    }
    std::vector<std::unique_ptr<CSyncLockGroup>>::_Emplace_reallocate<std::unique_ptr<CSyncLockGroup>>(
      v4,
      xmmword_1803FA8E0,
      &v7);
    goto LABEL_19;
  }
  return *(struct CSyncLockGroup **)i;
}
